#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "arrays.h"

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
void printMassiv(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            printf("%5d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
}
void random(int** arr, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            *(*(arr+i)+j) = rand() % 201 -100;
        }
    }
}
void input(int*** arr, int n)
{
    *arr = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        *(*arr+i) = (int*)calloc(n, sizeof(int));
    }
        
}

int MinOnMainDiaginal(int** arr,int n) 

{

    int min1 = 100;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i == j && arr[i][j] < min1) 
            {
                min1 = arr[i][j];

            }
        }
    }
    return min1;
}

int MinUnderMainDiaginal(int** arr, int n) {
  
    int min2 = 100;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j && arr[i][j] < min2) {
                min2 = arr[i][j];
            }
        }
    }
    return min2;
}

void pamiatMassiva(int** arr, int n, int m)
{
    arr = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (int*)calloc(m, sizeof(int));
    }
}