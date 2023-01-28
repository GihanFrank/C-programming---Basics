#include <stdio.h>
int main()

{
    int a;
    int b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("\nEnter Second Number:");
    scanf("%d", &b);

    printf("\nSum = %d\nProduct = %d\nDivision = %d\nRemainder = %d", a + b, b * a, b / a, b % a);
    return 0;
}