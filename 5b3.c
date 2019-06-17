#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void maxmin(int x, int *pmax, int *pmin);

int main()
{
	srand(rand());

	int arr[20];
	int x, y;
	int min = 50;
	int max = 51;
	int *pmin = &min;
	int *pmax = &max;

	for (x = 0; x < 20; x++) {
		arr[x] = rand() % 100 + 1;
	}

	x = 0;

	for (y = 0; y < 20; y++) {
		x = arr[y];
		maxmin(x, pmax, pmin);
	}


	return 0;
}

void maxmin(int x, int *pmax, int *pmin)
{
	if (x < *pmin) {
		*pmin = x;
	}
	else if (x > *pmax) {
		*pmax = x;
	}

}
