#include <stdio.h>

int main()
{
    char cInput, *ptrcInput;
    int iInput, *ptriInput;
    float fInput, *ptrfInput;

    printf("Enter a character: ");
    scanf("%c", &cInput);
    printf("Enter an integer: ");
    scanf("%d", &iInput);
    printf("Enter a float: ");
    scanf("%f", &fInput);

    printf("\nThe address of %c is 0x%p\n", cInput, ptrcInput);
    printf("The address of %d is 0x%p\n", iInput, ptriInput);
    printf("The address of %f is 0x%p\n", fInput, ptrfInput);

    return 0;
}
