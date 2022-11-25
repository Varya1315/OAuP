#include <time.h>
#include "my.h"

int main()
{
    srand(time(NULL));
    int n,k;
    int array[100][100] = { 0 };
    n = sizearr(1);
    k = sizearr(2);
    input(array, n,k);
    output(array, n,k);
    proz(array, n,k);

    getchar();
    return 0;
}