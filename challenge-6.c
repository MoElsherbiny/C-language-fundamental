#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 5
/**
 * Write a Program that checks and prints if a given array is a Palindrome
 * or not
 * [1,3,2,3,1] This is  Palindrome
 * [1,4,6,2] This is Not Palindrome
 */

int main()
{
    int arr[SIZE] = {1, 3, 2, 3, 1};
    int i;
    int is_Palindrome = 1;
    for (i = 0; i < 5; i++)
    {
        if(arr[i] != arr[SIZE - 1 - i])
        {
            is_Palindrome = 0;
            break;
        }
    }
    if(is_Palindrome ==1)
    {
        printf("This is a Palindrome Array!!\n");

    }
    else if(is_Palindrome == 0)
    {
        printf("This is Not a Palindrome Array!\n");
    }
    return 0;
}