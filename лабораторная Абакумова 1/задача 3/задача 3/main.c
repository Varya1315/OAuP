#include<stdio.h>
main()
{
	int a, b, c;
	while (scanf_s("%d", &a) != 1) //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}
	while (scanf_s("%d", &b) != 1) //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}
	while (scanf_s("%d", &c) != 1) //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}
	printf("First number = %d\n", a);
	printf("Second number = %d\n", b);
	printf("Third number = %d\n", c);
	if (a + b == 0) //���� ����� ����,�� ����� ��������������
		printf(" remaining number is %d\n", c); //����� 3 ����� 
	if (a + c == 0)
		printf(" remaining number is %d\n", b);
	if (c + b == 0)
		printf(" remaining number is %d\n", a);
	else if (a + b != 0 && a + c != 0 && c + b != 0) //���� �� ���� �� ���� �� ����� ���� ,�� ����� ��������� ����� ��� ���������������
		printf(" no\n"); // ����� no

	return 0;
}
