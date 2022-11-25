#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int sizearr()
{
    int n;
    printf("Enter number of elements:\n");

    while (scanf_s("%d", &n) != 1 || n <= 0 || n > 100 || getchar() != '\n')
    {
        printf("Wrong imput. Try again\n");
        rewind(stdin);
    }
    return n;
}
void input(int* array, int n)
{
   /** for (int k = 1; k<99; k = 2 * k)
    {  
        array[50] = {k};
        printf("%d ", k);
         int a[] = { 5, 4, 3, 2, 1 }; // массив a содержит 5 элементов
  printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);

    }
  */

    printf("%d ", array[50]);

}
