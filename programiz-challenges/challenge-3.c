#include <stdio.h>

/**
 * Write a Program that  Find the largest number among three numbers
 */

int main()
{
    double num1, num2, num3;
    printf("Enter Three numbers to check: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    if ((num1 > num2) && (num1 > num3))
    {
        printf("The largest number is %.lf\n", num1);
    }
    else if ((num2 > num1) && (num2 > num3))
    {
        printf("The largest number is %.lf\n", num2);
    }
    else if ((num3 > num1) && (num3 > num2))
    {
        printf("The largest number is %.lf\n", num3);
    }

    return 0;
}