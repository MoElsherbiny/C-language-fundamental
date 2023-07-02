#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This program takes an integer input from the user and
 *              calculates the sum of the numbers from 1 to the input.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int num, i, sum = 0;

    printf("Enter the number you want to sum: ");
    scanf("%d", &num);

    /* Calculate the sum of the numbers from 1 to num */
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("The sum of the numbers from 1 to %d is: %d\n", num, sum);

    return (0);
}