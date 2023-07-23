#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5

/**
 * Write a Program that should calculate and print the largest Sum
 * of two Adjacent Elements (Neighbors) in Array
 * Example : --> 10
 */
int main()
{
    int arr[SIZE] = {1, 4, 3, 7, 1};
    int maxSum = arr[0] + arr[1];
    int current = 0;
    for (int i = 0; i < SIZE - 1; i++)
    {
        current = arr[i] + arr[i + 1];
        if (current > maxSum)
        {
            maxSum = current;
        }
    }
    printf("The largest Sum of two Adjacent Elements is : %d\n", maxSum);

    return 0;
}