#include <time.h>
#include "my.h"

int main()
{
    srand(time(NULL));
    int n;
    int array[100][100] = { 0 };
    n = sizearr();
    input(array, n);
    output(array, n);
   proz(array, n);

    getchar();
    return 0;
}