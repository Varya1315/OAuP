#include<stdio.h>
main()
{
	int a, b, c;
	while (scanf_s("%d", &a) != 1) //проверка на совпадение введенного символа с числом
	{
		printf("enter number\n");
		rewind(stdin); // очистка буфера
	}
	while (scanf_s("%d", &b) != 1) //проверка на совпадение введенного символа с числом
	{
		printf("enter number\n");
		rewind(stdin); // очистка буфера
	}
	while (scanf_s("%d", &c) != 1) //проверка на совпадение введенного символа с числом
	{
		printf("enter number\n");
		rewind(stdin); // очистка буфера
	}
	printf("First number = %d\n", a);
	printf("Second number = %d\n", b);
	printf("Third number = %d\n", c);
	if (a + b == 0) //если сумма нуль,то числа противоположны
		printf(" remaining number is %d\n", c); //вывод 3 числа 
	if (a + c == 0)
		printf(" remaining number is %d\n", b);
	if (c + b == 0)
		printf(" remaining number is %d\n", a);
	else if (a + b != 0 && a + c != 0 && c + b != 0) //если ни одна из сумм не равна нулю ,то среди введенных чисел нет противоположных
		printf(" no\n"); // вывод no

	return 0;
}
