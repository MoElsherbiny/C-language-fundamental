#include <stdio.h>

/**
 * Write a function with No Arguments Passed But  {Returns a Value}
 * This function Check if the number is Prime or not
 * A prime number is a natural number that is greater than 1 and has only two factors: 1 and itself. 
 * This means that a prime number cannot be divided by any other natural number except 1 and itself.
 *  For example, 2, 3, 5, 7, 11, 13, 17, and 19 are prime numbers, because they cannot be divided by any other natural 
 * number without leaving a remainder. However, 4, 6, 8, 9, 10, 12, and so on are not prime numbers,
 *  because they can be divided by other natural numbers besides 1 and themselves.
 *  Prime numbers are important in mathematics and cryptography, because they have unique properties and patterns.
 */

int checkPrimeNumber();
int main()
{

    int n, i, flag = 0;
    n = checkPrimeNumber();
    if (n == 0 || n == 1)
    {
        flag = 1;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)

        {
            flag = 1;
        }
        break;
    }

    if (flag == 1)
        printf("%d is not a prime number.\n", n);
    else
        printf("%d is a prime number.\n", n);
    return (0);
}

int checkPrimeNumber()
{
    int n;
    printf("Enter The number: ");
    scanf("%d", &n);

    return n;
}