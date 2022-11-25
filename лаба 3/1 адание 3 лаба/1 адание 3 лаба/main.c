#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    char  resh;
    int newsize = 0;
    int n, i = 0;
    int counter = 0;
    int sum = 0;
    int array[100] = { 0 };

    printf("Enter number of elements:\n");

    while (scanf_s("%d", &n) != 1 || n <=0 || n > 100 || getchar() != '\n')
    {
        printf("Wrong imput. Try again\n");
        rewind(stdin);
    }
    int max = array[0];
    printf("do you want to random numb?(y - yes )\n ");
    scanf_s("%c", &resh);
    rewind(stdin);
    if (resh == 'y' || resh == 'Y')
    {
        for (int counter = 0; counter < n; counter++)
            printf("Array elements % d\n", array[counter] = rand() % 200 -100 );
        if (array[counter] > max)
        {
            max = array[counter];
            sum = sum + array[counter];
        }
        for (int i = 0; i < n; i++)
            if (array[i] % 2 != 0)
                array[newsize++] = array[i];
        for (int i = 0; i < newsize; i++)
        {
            printf(" %d", array[i]);
        }


        for (int i = 0; i < counter; i++)
        {

            printf(" All odd elements %d ", array[i]);
        }

    }
    else
    {
        for (counter = 1; counter <= n; counter++)
        {
            printf("Enter number %d:\n", counter);
            while (scanf_s("%d", &array[counter]) != 1)
            {
                printf("Wrong imput. Try again\n");
                rewind(stdin);
            }
        }
        if (array[i] > max)
            max = array[i];
        rewind(stdin);
        for (int i = 0; i <= n; i++)
        {
            if (array[i] % 2 != 0)
                array[newsize++] = array[i];
        }
        for (int i = 0; i < newsize; i++)
        {
            printf(" %d", array[i]);

        }

    }


    return(0);
}
