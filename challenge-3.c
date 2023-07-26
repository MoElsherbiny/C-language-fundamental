#include <stdio.h>

/* C program to add two integers entered by the User */
/**
 * main - add two integers entered by the User
 *
 * Return: 0 on Success
 */

int main(void)
{
    int number_1, number_2, sum;
    printf("Please Enter the Two integer: ");
    scanf("%d %d", &number_1, &number_2);
    sum = number_1 + number_2;

    printf("The Sum of the Two integers entered is %d + %d = %d \n", number_1, number_2, sum);

    return (0);
}
