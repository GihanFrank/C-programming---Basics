#include <stdio.h>
int main()
{
    int a;
    printf("Enter your Grade: (0-100)\n");
    scanf("%d", &a);
    if (a <= 100 && a > 85)
    {
        printf("Your Grade A");
    }
    else if (a >= 65 && a <= 84)
    {
        printf("Your Grade B");
    }
    else if (a >= 55 && a <= 64)
    {
        printf("Your Grade C");
    }
    else if (a >= 49)
    {
        printf("Your Grade D");
    }
    else
    {
        printf("Your Grade F");
    }
    printf("\nyour Marks = %d", a);
    return 0;
}