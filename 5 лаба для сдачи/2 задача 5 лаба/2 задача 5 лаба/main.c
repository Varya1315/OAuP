#include"arrays.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int n = sizearr();
	int** arrofarr = (int**)malloc(n * sizeof(int*));
	input(&arrofarr, n);
	output(arrofarr, n);
	free(arrofarr);
	return 0;
}
