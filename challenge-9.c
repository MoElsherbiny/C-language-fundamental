#include <stdio.h>

/**
 * Write C program to swap two numbers
 */

int main()
{
    double first, second, temp;
    printf("Enter the first number: ");
    scanf("%lf", &first);
    printf("Enter the second number: ");
    scanf("%lf", &second);
    // SET value for the first number to temp
    temp = first;
    // SET value of the second assigned to First
    first = second;
    // SWAPPING
    second = temp;
    printf("\nAfter Swapping the value of the first number is = %.lf\n", first);
    printf("\nAfter Swapping the value of the second number is = %.lf\n",second);
    return 0;
}