#include <time.h>
#include "Header.h"

int main()
{
    srand(time(NULL));
    int n;
    int array[100] = { 2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50 };
    n = sizearr();
    input(array, n);
    

    getchar();
    return 0;
}