#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "arrays.h"

int sizearr()
{
	int n = 0;
	printf("Enter number of row :\n");
	while (scanf_s("%d", &n) != 1 || n <= 0 || n > 100 || getchar() != '\n')
	{
		printf("Wrong imput. Try again\n");
		rewind(stdin);
	}

	return n;

}
void input(int*** arrofarr, int n)
{
	printf("selet the input methoh:\n1) random input\n2) user input\n");
	int in;
	while (scanf_s("%d", &in) != 1 || getchar() != '\n' || in < 1 || in > 2)
	{
		printf("Input error. Try again.\n ");
		rewind(stdin);
	}
	switch (in)
	{
	case 1:

		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			int num = rand() % 20;
			(*arrofarr)[i] = (int*)malloc(num * sizeof(int));
			for (int j = 0; j < num - 1; j++)
				(*arrofarr)[i][j] = j + 1;
			(*arrofarr)[i][num - 1] = 0;
		}
		break;

	case 2:


		for (int i = 0; i < n; i++)
		{
			int num;
			printf("Enter number of elements in %i row: ", i + 1);
			while (scanf_s("%d", &num) != 1 || getchar() != '\n' || num <= 0)
			{
				printf("Input error. Try again.\n ");
				rewind(stdin);
			}
			(*arrofarr)[i] = (int*)malloc(num * sizeof(int));
			for (int j = 0; j < num; j++)
				(*arrofarr)[i][j] = j + 1;
			(*arrofarr)[i][num] = 0;

		}


		break;
	}
}


void output(int** arrofarr, int n)

{

	for (int i = 0; i < n; i++)
	{
		int j = 0;
		while (arrofarr[i][j] != 0)
		{
			printf("%4i", arrofarr[i][j]);
			j++;
		}
		printf("\n");
	}
}