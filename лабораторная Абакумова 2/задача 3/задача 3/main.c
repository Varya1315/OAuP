#include<stdio.h>
main()
{
	int a, b, dev, oldDev;
	while (scanf_s("%d", &a) != 1) // //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter whole number\n");
		rewind(stdin); // ������� ������
	}
	while (scanf_s("%d", &b) != 1) // //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter whole number\n");
		rewind(stdin); // ������� ������
	}


	dev = 2;
	oldDev = 1;
	while ((dev < a && a>0) || (dev > -a && a < 0))  // �������� ������ ���� ������ ��������
	{
		if (a % dev == 0) // ������� - ������������� ������� �� �������

		{
			if (oldDev == dev)
			{
				a = a / dev; // 
				continue;// ��� ��������� �������� � ����� ����� ���������������
			}
			else
			{
				a = a / dev;
				oldDev = dev;
				if (b % dev == 0)
				{
					printf("the number is not mutually prime"); // ����� ����� "�� ������� �������"
					return 0;
				}
				else
					continue;
			}
		}
		else dev += 1; // ���������� �������� �� �������
	}

	printf("the number is mutually prime");


	return 0;
}
