#include <stdio.h>

void bubblesort(int[20], int);

int main()
{
    int n, c, d;
    int array[20] = {20, 19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    printf("Unsorted list:\n");

    for (c = 0; c < 20; c++)
        printf("%d\n", array[c]);

    bubblesort(array, c);

    printf("\nSorted list in ascending order:\n");

    for (c = 0; c < 20; c++)
        printf("%d\n", array[c]);

    return 0;

}

void bubblesort(int list[], int n)
{
    int c, d, t;

    for (c = 0; c < n - 1; c++){
        for (d = 0; d < n - c - 1; d++){
            if (list [d] > list [d + 1]){
                t = list[d]; //Number held in temporary location
                list[d] = list[d + 1]; //Swapping occurs
                list[d + 1] = t;
            }
        }
    }
}
