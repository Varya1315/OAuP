#include <stdio.h>
int main()
{
    int n, x = 0;

    while (scanf_s("%d", &n) != 1) // //�������� �� ���������� ���������� ������� � ������
    {
        printf("enter  number\n");
        rewind(stdin); // ������� ������
    }
    for (int i = 1; i <= n; i += 1)
    {
        for (int j = i; j <= n; j += 1)
            if (i * i * i + j * j * j == n)
                ++x;
    }
    printf("%d\n", x);
    return 0;
}
