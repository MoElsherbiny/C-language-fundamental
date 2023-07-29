#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program that gets 2 Floating-points numbers and prints
 * maximum and minimum
 *
 */

/** PseudoCode technique
 * Initializing two floating variables
 * Ask the user to provide this two numbers
 * store this data using scanf()
 * using if condition to check which of the number is max or min
 * print the final results
 */

#include <stdio.h>

int main()
{
    float num1, num2;
    // Prompt user for first number
    printf("Can you Provide this first number: ");
    scanf("%f", &num1);
    // Prompt user for second number
    printf("Can you Provide this second number: ");
    scanf("%f", &num2);
    // Compare numbers and print result
    if (num1 > num2)
    {
        printf("number: %f is maximum and number: %f is minimum", num1, num2);
    }
    else
    {
        printf("number: %f is minimum  and number: %f is maximum", num1, num2);
    }
}
