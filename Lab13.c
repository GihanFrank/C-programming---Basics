#include <stdio.h>
int main()
{
    int number = 0;
    int i = 0;
    while (i <= 15)
    {
        number += i;
        i++;
    }
    printf("Sum = %d", number);
    return 0;
}