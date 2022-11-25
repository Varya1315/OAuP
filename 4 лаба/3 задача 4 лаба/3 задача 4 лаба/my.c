#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "my.h"

int sizearr()
{
    int n;
    printf("Enter number of elements :\n");


    while (scanf_s("%d", &n) != 1 || n <= 0 || n > 100 || getchar() != '\n')
    {
        printf("Wrong imput. Try again\n");
        rewind(stdin);
    }
    return n;

}

void input(int array[100][100], int n)

{
    char  resh;
    printf("do you want to random numb?(y - yes )\n ");
    scanf_s("%c", &resh);
    if (resh == 'y' || resh == 'Y')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)

                array[i][j] = rand() % 20 - 10;


        }
    }
    else {
        rewind(stdin);
        for (int i = 0; i < n; i++)

        {
            for (int j = 0; j < n; j++)

            {
                printf("Enter number %d:\n", i);
                while (scanf_s("%d", &array[i][j]) != 1 || n < 0 || n > 100 || getchar() != '\n')
                {
                    printf("Wrong imput. Try again\n");
                    rewind(stdin);
                }
            }

        }

    }
}
void output(int array[100][100], int n)
{
    printf("Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
}

void sum(int array[100][100], int n)

{
    int sum=0;
    for (int i = 0; i <= n / 2 + n % 2 - 1; i++) 
    {
        for (int j = i; j + i < n; j++) {
          sum += array[i][j];
           
        }
       
    }
   printf("\nSum: %d", sum);
}