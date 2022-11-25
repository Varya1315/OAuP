#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "my.h"


void output(int array[100][100], int n,int k)
{
    printf("Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}


void printMassiv(int* array, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
}

void random(int* array, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        array[i] = 2 * (rand() % 50);
    }
}
int startOfSegment(int** arr, int a)
{
    int a;
    printf("\nEnter a segment: from ");
    while (scanf_s("%d", &a) != 1 || getchar() != '\n') {
        printf("Input error. Try again.\n ");
        rewind(stdin);
    }
    return a;
}
int endOfSegment(int** arr, int b)
{
    int b;
    printf("to ");
    while (scanf_s("%d", &b) != 1 || getchar() != '\n' || b < a) {
        printf("Input error. Try again.\n ");
        rewind(stdin);
    }
    return b;
}
int sizearr()
{
    int n = 0;
    printf("Enter number of elements :\n");
    while (scanf_s("%d", &n) != 1 || n <= 0 || n > 100 || getchar() != '\n')
    {
        printf("Wrong imput. Try again\n");
        rewind(stdin);
    }

    return n;

}