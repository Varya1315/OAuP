#include<stdio.h>
main()
{
	int a, b, dev, oldDev;
	while (scanf_s("%d", &a) != 1) // //проверка на совпадение введенного символа с числом
	{
		printf("enter whole number\n");
		rewind(stdin); // очистка буфера
	}
	while (scanf_s("%d", &b) != 1) // //проверка на совпадение введенного символа с числом
	{
		printf("enter whole number\n");
		rewind(stdin); // очистка буфера
	}


	dev = 2;
	oldDev = 1;
	while ((dev < a && a>0) || (dev > -a && a < 0))  // делитель должен быть меньше делимого
	{
		if (a % dev == 0) // процент - целочисленный остаток от деления

		{
			if (oldDev == dev)
			{
				a = a / dev; // 
				continue;// все следующие комманды в цикле будут проигнорированы
			}
			else
			{
				a = a / dev;
				oldDev = dev;
				if (b % dev == 0)
				{
					printf("the number is not mutually prime"); // вывод числа "не взаимно простые"
					return 0;
				}
				else
					continue;
			}
		}
		else dev += 1; // увеличение делителя на единицу
	}

	printf("the number is mutually prime");


	return 0;
}
