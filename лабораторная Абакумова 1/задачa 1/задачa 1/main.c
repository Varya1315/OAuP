#include<stdio.h>
main()
{
	float r, h, S1, S2, V;
	const double PI = 3.14;

	while (scanf_s("%f", &r) != 1) // //�������� �� ���������� ���������� ������� � ������
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}

	while (scanf_s("%f", &h) != 1) //�������� �� ���������� ���������� ������� � ������ 
	{
		printf("enter number\n");
		rewind(stdin); // ������� ������
	}

	printf("Radius of a cylinder = %.2f\n", r);
	printf("Height of a cylinder = %.2f\n", h);
	S1 = 2 * PI * r * h; // ������� ���������� ������� ������� �����������

	printf("Side surface area: %.2f\n", S1);

	S2 = 2 * PI * r * (r + h);// ������� ���������� ������� ������ �����������

	printf(" Total surface area: %.2f\n", S2);

	V = PI * r * r * h; // ������� ���������� ������ ��������

	printf("  Cylinder volume : %.2f\n", V);


	return 0;
}
