#include"arrays.h"

int main() {
    int n = sizearr();
    int* arr = (int*)malloc(n * sizeof(int));
    random(arr, n);
    printMassiv(arr, n);
    int a = startOfSegment();
    int b = endOfSegment(a);
    taska(arr, n, a, b);
    free(arr);
    return 0;
}