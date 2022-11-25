#include"arrays.h"
int main() {
    int** arr = 0;
    int n = sizearr();
    input(&arr, n);
    random(arr, n);
    printMassiv(arr, n);
    printf("The minimum element on the main diagonal= %d", MinOnMainDiaginal(arr, n));
    printf("\nThe minimum element under the main diagonal= %d", MinUnderMainDiaginal(arr, n));
    free(arr);
    return 0;
}