#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program checks whether a given number is even or odd
 *
 */

int main()
{
    int num;
    printf("Can you Provide the number you want to Check: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is an even Num\n", num);
    }
    else
    {
        printf("%d this is an odd Num\n", num);
    }
    return 0;
}
