#include <stdio.h>
#include <stdlib.h>

/**
 * Write a function that Receives a number
 * an then it's calculated the Factorial of the given number is
 * calculated by multiplying all the numbers
 *
 */

void calcNumbers()

{
    int num;
    long long sum = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }
    printf("The factorial of %d is %lld\n", num, sum);
}
int main()
{
    calcNumbers();
    return 0;
}