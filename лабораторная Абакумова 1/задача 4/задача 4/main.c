#include<stdio.h>
main()
{
	int input;
	while (scanf_s("%d", &input) != 1)  //проверка на совпадение введенного символа с числом
	{
		printf("enter number\n");
		rewind(stdin); // очистка буфера
	}

	printf("Enter mounth ");

	switch (input) // отлавливаем значение input
	{
	case 1:  printf("Januare"); // каждой цифре соответствует свой мес€ц
		break;
	case 2: printf(" February");
		break;
	case 3: printf("March");
		break;
	case 4: printf("April");
		break;
	case 5: printf("May");
		break;
	case 6: printf("June");
		break;
	case 7: printf("Jule");
		break;
	case 8: printf("August");
		break;
	case 9: printf(" September");
		break;
	case 10: printf("October");
		break;
	case 11: printf("November");
		break;
	case 12: printf(" December");
		break;

		return 0;
	}
}
