#include <stdio.h>
int main()
{
    int userInput;
    printf("\nEnter a number: \n");
    scanf("%d", &userInput);
    int i = 1;
    int b = 0;
    while (i <= userInput)
    {

        if (userInput % i == 0)
        {
            b = b + i;
        }
        i++;
    }
    if (b == 2 * userInput)
    {
        printf("\n %d is Perfect number", userInput);
    }
    else
    {
        printf("\n%d is not a perfect number", userInput);
    }
    return 0;
}