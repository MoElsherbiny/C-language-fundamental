#include <stdio.h>

/**
 * Write Program to calculate the sum of numbers (10 numbers max)
 * if the user enters a negative number, it's not added to the result
 */

int main()
{
    int number, i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number:[%d] ", i);
        scanf("%d", &number);
        if (number < 0)
        {
            continue;
        }
        sum += number;
    }
    printf("The Sum is: %d \n", sum);
    return 0;
}