#include <stdio.h>

/**
 * Write a Program that
 * print an integer entered by the user
 */
/**
 * main - prints integer entered by the user
 *
 * Return : 0 on Success
 */

int main(void)
{
    int number;
    printf("Enter the integer: ");
    scanf("%d", &number);
    printf("The number you entered is %d\n", number);
    return (0);
}