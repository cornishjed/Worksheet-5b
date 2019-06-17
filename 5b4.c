#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *p1, int *p2);

int main()
{
	srand(rand());

	int arr[20];
	int x, y;

	for (x = 0; x < 20; x++) {
		arr[x] = rand() % 100 + 1;
	}

	printf("Original list order: ");

	for (x = 0; x < 20; x++) {
		printf("%d ", arr[x]);
	}

	for (y = 0; y < 100; y++) {
		for (x = 0; x < 19; x++) {
			swap(&arr[x], &arr[x + 1]);
		}
	}

	printf("\n\nAfter bubblesort: ");

	for (x = 0; x < 20; x++) {
		printf("%d ", arr[x]);
	}

	return 0;

}

void swap(int* p1, int* p2)
{
	int temp = *p1;
	if (*p1 > *p2) {
		*p1 = *p2;
		*p2 = temp;
	}
	return;
}
