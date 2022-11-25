#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "function.h"
void console()
{
    rewind(stdin);
    getchar();
    system("cls");
}

void check(int* num, int a)
{

        long long tmp;
        scanf_s("%10lld", &tmp);
        while (getchar() != '\n' || tmp != (int)tmp)
        {
            rewind(stdin);
            printf("\nErorr: please enter correct data:\n");
            scanf_s("%10lld", &tmp);
        }
        *num = tmp;
    

}


void inputMas2(int** matr, int n, int m)
{
    int a;
    printf("Choose:\n1)random input\n2)custom input\n");
    check(&a, 3);

    int i, j;
    for (i = 0; i < n; i++)
        inputColumns(*(matr + i), m, a);
}
void outputColumns(int* m, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", *(m + i));
    printf("\n");
}
void outputMas2(int** matr, int n, int m)
{
    for (int i = 0; i < n; i++)
        outputColumns(matr[i], m);
}
void vDvumernomMassiveVipolnitCheclicheskiySdvigElementovKajdoiStrokiVlEvoNaKPosiciyPoslednieElementiPeremechaytsaVNachalo()
{
    srand(time(NULL));
    int** mas;
    int N, M, k;
    printf("Enter amount of rows:\n");
    check(&N, 4);
    printf("Enter amount of columns:\n");
    check(&M, 4);
    pamiatMassiva(&mas, N, M);
    inputMas2(mas, N, M);
    printf("Enter amount of shifts:\n");
    check(&k, 4);
    int temp = 0;
    outputMas2(mas, N, M);
    printf("\n\n\n");
    while (k != 0) {
        for (int i = 0; i < N; i++)
        {
            temp = mas[i][0];
            for (int j = 0; j < M; j++)
            {
                if (j != M - 1)
                    mas[i][j] = mas[i][j + 1];
                else
                    mas[i][j] = temp;
            }
        }
        k--;
    }
    outputMas2(mas, N, M);
}

void inputColumns2(int** mas)
{
    int i = 1, j = 0;
    (*mas) = NULL;
    do
    {
        printf("Enter an arr element (if u want to finish input row, please enter -100):\n");
        (*mas) = (int*)realloc((*mas), i * sizeof(int));
        check(&(*mas)[j], 2);
        while ((*mas)[0] == -100)
        {
            printf("Error: input number(not -100):\n");
            check(&(*mas)[0], 2);
        }
        i++; j++;
    } while ((*mas)[j - 1] != -100);

}

void outputColumns2(int* m)
{
    int i = 0;
    while (*(m + i) != -100)
    {
        printf("%d\t", m[i]);
        i++;
    }
    printf("\n");
}



