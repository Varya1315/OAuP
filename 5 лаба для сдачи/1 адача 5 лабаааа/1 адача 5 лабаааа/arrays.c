#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "arrays.h"


void output(int array[100][100], int n, int k)
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


void printMassiv(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void random(int* array, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        array[i] = 2 * (rand() % 49 + 1);
    }
}

int startOfSegment()
{
    int a;
    printf("\nEnter a segment: from ");
    while (scanf_s("%d", &a) != 1 || getchar() != '\n') {
        printf("Input error. Try again.\n ");
        rewind(stdin);
    }
    return a;
}
int endOfSegment(int a)
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
int taska(int* arr, int n, int a, int b)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] <= a || arr[i] >= b)
        {
            for (int l = i; l < n; l++)
                arr[l] = arr[l + 1];
            n--;
            arr = (int*)realloc(arr, n * sizeof(int));
        }

    }

    if (n == 0)
        printf("All elements of the array are in the segment.");
    else printMassiv(arr, n);
}