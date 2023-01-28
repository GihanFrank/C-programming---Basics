#include <stdio.h>
int main()
{
    int b;
    printf("\nEnter a Number: ");
    scanf("%d", &b);
    int a = 0;
    for (int i = 0; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            a = a - i;
        }
        else
        {
            a = a + i;
        }
    }
    printf("\n%d", a);
    return a;
}