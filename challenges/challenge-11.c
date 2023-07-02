#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program takes two integer inputs from the user and
 *              prints the multiplication table for the first number,
 *              up to the specified multiplicate number.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int number, i;
    int multiplicate;
    int result;

    printf("Enter the number and it will be auto divided: ");
    scanf("%d", &number);

    printf("Enter the multiplicate Number: ");
    scanf("%d", &multiplicate);

    for (i = 1; i <= multiplicate; i++)
    {
        result = number * i;
        printf(" %d * %d = %d\n", number, i, result);
    }

    return (0);
}