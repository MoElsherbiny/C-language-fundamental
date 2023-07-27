#include <stdio.h>

/*Program to add the sum of numbers until the user enters zero*/

int main()
{
    int number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);

    printf("Sum = %d\n", sum);

    return 0;
}