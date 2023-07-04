#include <stdio.h>
#include <stdlib.h>

/**
 * Write a function that
 * Receives a 2-digits number
 * Makes sure it has 2 digits
 * find and prints maximum digit
 */

void maxDigit(int num)
{
    if (num > 99 || num < 10)
        printf("This is not a 2-digits number! \n");
    else
    {

        if (num % 10 > num / 10)
            printf("Maximum digit in %d is %d\n", num, num % 10);
        else
        {
            printf("Maximum digit in %d is %d\n", num, num / 10);
        }
    }
}
int main()
{
    maxDigit(19);
    return 0;
}