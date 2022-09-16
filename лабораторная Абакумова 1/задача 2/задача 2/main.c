#include<stdio.h>
main()
{
	float a, b;
	while (scanf_s("%f", &a) != 1) // //проверка на совпадение введенного символа с числом
	{
		printf("enter number\n");
		rewind(stdin); // очистка буфера
	}
	while (scanf_s("%f", &b) != 1) //проверка на совпадение введенного символа с числом
	{
		printf("enter number\n");
		rewind(stdin); // очистка буфера
	}
	printf(" First number = %.2f\n", a);
	printf(" Second number = %.2f\n", b);
	if (a == b) //сравнение чисел
		printf(" The numbers are equal\n");
	else // числа не равны
		printf(" The numbers are not equal\n");
	return 0;
}
