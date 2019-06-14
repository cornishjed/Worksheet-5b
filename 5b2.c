#include <stdio.h>

int main()
{
    char* argv[] = {"Hello", "World", "!!!"};

    printf("String given is %s\n", argv);

    printf("Array address:\t0x%p\n", argv);
    printf("First element:\t0x%p\n", argv[0]);
    printf("Second element:\t0x%p\n", argv[1]);
    printf("Third element:\t0x%p\n", argv[2]);

    return 0;
}
