#include <stdio.h>

/**
 * Write a C Program to calculate the sum of first n natural numbers
 * Positive integers 1,2,3...n are known as natural numbers*/

int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
     sum = sum + count ;
    }

    printf("Sum = %d\n", sum);

    return 0;
}