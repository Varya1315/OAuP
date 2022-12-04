#include "arrays.h"
void console()
{
    rewind(stdin);
    getchar();
    system("cls");
}

void check(int* num, int a)
{
    if (a == 1) {
        scanf_s("%d", num);
        while (getchar() != '\n' || (*num) < 1 || (*num) > 3)
        {
            rewind(stdin);
            printf("Error: please enter correct data:\n");
            scanf_s("%d", num);
        }
    }
    if (a == 2)
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
    if (a == 3)
    {
        scanf_s("%d", num);
        while (getchar() != '\n' || (*num) < 1 || (*num) > 2)
        {
            rewind(stdin);
            printf("\nErorr: please enter correct data:\n");
            scanf_s("%d", num);
        }
    }
    if (a == 4)
    {
        long long tmp;
        scanf_s("%10lld", &tmp);
        while (getchar() != '\n' || tmp != (int)tmp || tmp < 1)
        {
            rewind(stdin);
            printf("\nErorr: please enter correct data:\n");
            scanf_s("%10lld", &tmp);
        }
        *num = tmp;
    }
}

void in(int* mas, int n)
{
    int a;
    printf("Choose:\n1)random input\n2)custom input\n");
    check(&a, 3);
    if (a == 1)
    {
        for (int i = 0; i < n; i++)
        {
            *(mas + i) = rand() % 10;
        }
    }
    if (a == 2)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter an arr element: \n");
            check(&(*(mas + i)), 2);
        }
    }

}
void out(int* arr, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
}
int max_index(int* arr, int n)
{
    int max = arr[0], index = 0;
    int i = 1;
    while (i < n)
    {
        if (max < arr[i]) {
            max = arr[i];
            index = i;
        }
        i++;
    }
    return index;
}
void Selection(int* mas, int n) {
    int minPosition, tmp;
    for (int i = 0; i < n; i++)
    {
        minPosition = i;
        for (int j = i + 1; j < n; j++)
            if (mas[minPosition] > mas[j])
                minPosition = j;
        tmp = mas[minPosition];
        mas[minPosition] = mas[i];
        mas[i] = tmp;

    }

}


void Quick(int* mas, int size) {
    int i = 0;
    int j = size - 1;
    int mid = mas[size / 2];
    do {
        while (mas[i] < mid )
            i++;
        while (mas[j] > mid)
            j--;

        if (i <= j) {

            int tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;
            i++;
            j--;

        }

    } while (i <= j);

    if (j > 0) {
        Quick(mas, j + 1);
    }
    if (i < size) {
        Quick(&mas[i], size - i);
    }
}


void first()
{
    srand(time(NULL));
    int n, k = 0, amount = 0;
    printf("Enter the number of elements in the arr:\n");
    check(&n, 4);
    int* mas = (int*)malloc(n * sizeof(int));
    in(mas, n);
    printf("Array:\n");
    out(mas, n);
    printf(" \n");
    int* temp = (int*)malloc((k + 1) * sizeof(int));
    for (int i = max_index(mas, n) + 1; i < n; i++)
    {
        if (mas[i] % 2 == 0)
        {
            temp = (int*)realloc(temp, (k + 1) * sizeof(int));
            temp[k] = mas[i];
            k++;
            amount++;
        }
    }

    if (amount == 0)
        printf("there is no even elements! \n");
    else {

        int a;
        printf("Choose:\n1)Quick\n2)Selection\n3)Contrast");
        check(&a, 3);
        if (a == 1) {

            clock_t begin = clock();

            Quick(temp, k);

            clock_t end = clock();
            double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
            printf("\n");
            printf("time is %f sec\n", time_spent);
        }
        if (a == 2)
        {

            clock_t begin = clock();
            Selection(temp, k);
            clock_t end = clock();
            double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
            printf(" \n");
            printf("time is %f sec\n", time_spent);
        }
            if (a == 3)
            {

                clock_t begin = clock();
                Selection(temp, k);
                clock_t end = clock();
                double time_spentnew1 = (double)(end - begin) / CLOCKS_PER_SEC;
                printf(" \n");
                printf("time is %f sec\n", time_spentnew1);

                clock_t begins = clock();

                Quick(temp, k);

                clock_t end1 = clock();
                double time_spentnew2 = (double)(end1 - begins) / CLOCKS_PER_SEC;
                printf("\n");
                printf("time is %f sec\n", time_spentnew2);

            }
         k = 0;
        for (int i = max_index(mas, n); i < n; i++)
        {
            if (mas[i] % 2 == 0)
            {
                mas[i] = temp[k];
                k++;
            }
        }
        printf("New array:\n");
      // out(mas, n);
    }

    free(temp);
    free(mas);

}

void sort(int* mas, int n, int tm) {
    in(mas, n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (mas[j] < mas[j + 1])
            {
                tm = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = tm;
            }
        }
    }
    printf("\nNumbers sorted: ");

}
void bad() {

    {
        srand(time(NULL));
        int n, k = 0, amount = 0;
        int tm = 0;
        printf("Enter the number of elements in the arr:\n");
        check(&n, 4);
        int* mas = (int*)malloc(n * sizeof(int));
       sort(mas, n, tm);
      
        out(mas, n);
        printf(" \n");
        int* temp = (int*)malloc((k + 1) * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            if (mas[i] % 2 == 0)
            {
                temp = (int*)realloc(temp, (k + 1) * sizeof(int));
                temp[k] = mas[i];
                k++;
                amount++;
            }
        }

        if (amount == 0)
            printf("there is no even elements! \n");
        else {

            int a;
            printf("Choose:\n1)Quick\n2)Selection\n");
            check(&a, 3);
            if (a == 1) {

                clock_t begin = clock();

                Quick(temp, k);

                clock_t end = clock();
                double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
                printf("\n");
                printf("time is %f sec\n", time_spent);
            }
            if (a == 2)
            {
                clock_t begin = clock();
                Selection(temp, k);
                clock_t end = clock();
                double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
                printf(" \n");
                printf("time is %f sec\n", time_spent);

            }
            k = 0;
            for (int i = 0; i < n; i++)
            {
                if (mas[i] % 2 == 0)
                {
                    mas[i] = temp[k];
                    k++;
                }
            }
            printf("New array:\n");
            out(mas, n);
        }

        free(temp);
        free(mas);
    }
       

}

void memory(int*** mas, int n, int m)
{
    (*mas) = (int**)calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    {

        (*mas)[i] = (int*)calloc(m, sizeof(int));
    }
}
  output1(int* m, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", *(m + i));
    printf("\n");
}
void input1(int* mas, int n, int a)
{

    if (a == 1)
    {
        for (int i = 0; i < n; i++)
        {
            *(mas + i) = rand() % 10;
        }
    }
    if (a == 2)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter an arr element: \n");
            check(&(*(mas + i)), 2);
        }
    }
}
void input(int** matr, int n, int m)
{
    int a;
    printf("Choose:\n1)random input\n2)custom input\n");
    check(&a, 3);
    int i;
    for (i = 0; i < n; i++)
        input1(*(matr + i), m, a);
}
void output(int** matr, int n, int M)
{

    for (int i = 0; i < n; i++)
        output1(matr[i], M);
}
int str(int* mas, int M)
{
    int sum = 0;
    for (int i = 0; i < M; i++)
        sum += mas[i];
    return sum;
}
void Insertion(int** arr, int N, int M) {//элементы просматриваются по одному
    int i, j;
    int* key;
    for (i = 1; i < N; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && str(arr[j], M) < str(key, M))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("\nNew array:\n");
    output(arr, N, M);

}
void ShellSort(int** mas, int N, int M)
{


    int i, j = 0;

    for (int gap = N / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < N; i++)
        {
            for (j = i - gap; j >= 0 && str(mas[j], M) < str(mas[j + gap], M); j -= gap)
            {
                int  temp = mas[j];
                mas[j] = mas[j + gap];
                mas[j + gap] = temp;
            }
        }
    }

    printf("\nNew array:\n");
    output(mas, N, M);
}
void free_1(int* mas, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(mas[i]);
    }
    free(*mas);
}
void second() {
    srand(time(NULL));
    int N, M, amount = 0;
    int** mas;
    int n = 0;
    printf("Enter the number of rows:\n");
    check(&N, 4);
    printf("Enter the number of columns:\n");
    check(&M, 4);
    memory(&mas, N, M);
    input(mas, N, M);
    output(mas, N, M);
    ShellSort(mas, N, M);
    free(mas, n);
    getchar();
}
