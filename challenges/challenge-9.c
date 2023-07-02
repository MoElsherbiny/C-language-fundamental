#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * Description: This program takes an integer input from the user and
 *              prints the sequence of numbers from 1 to 5, followed by
 *              the sequence of numbers from the input down to 1.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num, i;

printf("Enter the number and We will print it and it's revers: ");
scanf("%d", &num);

/* Print the sequence from 1 to 5 */
for (i = 1; i <= 5; i++)
{
printf("%d", i);
}

printf("\n");

/* Print the sequence from num down to 1 */
for (i = num; i >= 1; i--)
{
printf("%d", i);
}

printf("\n");

return (0);
}
