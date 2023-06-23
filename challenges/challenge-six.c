#include <stdio.h>
#include <stdlib.h>

/**
 * write a program that checks if a given number is "double-digit"
 * or "triple-digit"
 */

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 99)
    {
        printf("this is a double-digit number\n");
    }
    else if (num >= 100 && num <= 999)
    {
        printf("This is a triple-digit number\n");
    }
    else
    {
        printf("neither double or triple\n");
    }
    return 0;
}