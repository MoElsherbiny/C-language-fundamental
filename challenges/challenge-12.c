#include <stdio.h>
#include <stdlib.h>

/**
 * write a program print the numbers with it's type even or odd
 */
int main(void)
{
    int number, i; // declare variable to store input number and counter

    printf("Enter the number: "); // ask the user to input a number
    scanf("%d", &number);         // store the input number in the variable

    for (i = 2; i <= number; i++) // start a loop from 2 up to the input number
    {
        if (i % 2 == 0) // check if the current number is even
        {
            printf("%d is an even number\n", i); // print that the current number is even
        }
        else // if the current number is odd
        {
            printf("%d is an odd number\n", i); // print that the current number is odd
        }
    }

    return (0); // exit the program
}