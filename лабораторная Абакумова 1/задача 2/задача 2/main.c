#include<stdio.h>
main()
{
	float a, b;
	while (scanf_s("%f", &a) != 1) // //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}
	while (scanf_s("%f", &b) != 1) //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}
	printf(" First number = %.2f\n", a);
	printf(" Second number = %.2f\n", b);
	if (a == b) //��������� �����
		printf(" The numbers are equal\n");
	else // ����� �� �����
		printf(" The numbers are not equal\n");
	return 0;
}
