#include <stdio.h>

/**
 * Write a Program that receives 3 integers
 *  The program should print "Divisible" if in each pair between the three
 * number that can divided by the other-without a remainder
 */

int main()
{
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 == 0 || num2 == 0 || num3 == 0)
    {
        printf("Can't divide by 0 check your input one more time");
    }

    if ((num1 % num2 == 0 || num2 % num1 == 0) && (num2 % num3 == 0 || num3 % num2 == 0) && (num1 % num3 == 0 || num3 % num1 == 0))
    {
        printf("Divisible Numbers\n");
    }
    else
    {
        printf("Not Divisible Numbers\n");
    }

    return 0;
}