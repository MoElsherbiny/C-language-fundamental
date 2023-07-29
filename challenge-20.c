#include <stdio.h>

/**
 * Write Program to calculate the sum and average of positive numbers
 * If the user enters a negative number, the sum and average are displayed.
 */

int main()
{
    int i;
    int maxInput = 100;
    double number, average, sum = 0;
    for (i = 1; i < maxInput; i++)
    {

        printf("Enter the number: %d ", i);
        scanf("%lf", &number);
        if (number < 0)
        {
            goto jump;
        }
        sum += number;
    }
jump:
    printf("%d", i - 1);
    average = sum / (i - 1);
    printf("Sum = %.2lf\n", sum);
    printf("Average = %.2lf", average);
    return 0;
}
