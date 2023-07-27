#include <stdio.h>

/**
 * Write a Program to calculate the sum of numbers (10 numbers max)
 * If the user enters a negative number, the loop terminates
 * */

int main()
{
    int i;
    double number, sum = 0.0;

    for (i = 1; i <= 10; ++i)
    {
        printf("Enter n%d: ", i);
        scanf("%lf", &number);

        // if the user enters a negative number, break the loop
        if (number < 0.0)
        {
            break;
        }

        sum += number; // sum = sum + number;
    }

    printf("Sum = %.2lf", sum);

    return 0;
}