#include <stdio.h>

int main() {
	float S = 0;
	float k = 1;


	for (int i = 1; ; i++)

	{
		k = i;
		S += (1 / k);
		if (S > 5)
			break;

	}
	printf("%f", k);
	return 0;
}
