#include <stdio.h>
#include <stdlib.h>
/**
 * write a Program that receives an integer values and prints it
 * absolute value
 *
 */

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("The absolute value of %d is %d\n", num, num);
    }
    else
    {
        printf("The absolute value of %d is %d\n", num, -num);
    }
    return 0;
}