#include<stdio.h>
main()
{
	int input;
	while (scanf_s("%d", &input) != 1)  //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}

	printf("Enter mounth ");

	switch (input) // ����������� �������� input
	{
	case 1:  printf("Januare"); // ������ ����� ������������� ���� �����
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
