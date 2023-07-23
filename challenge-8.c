#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/**
 * Write a Program that creates an array of integers
 * The user is going to specify the values of the Array
 * Check if the Array is Really Sorted , Sorted , Not Sorted
 * Example [1,2,4,5,7,10] --> Really Sorted
 * Example [1,2,2,5,7,10] -->  Sorted
 * Example [1,2,5,3,2,10] --> Not Sorted
 *
 */

int main()
{
    int arr[SIZE];
    int i;
    int is_sorted = 1;
    int is_descending = arr[0] > arr[1];
    for (i = 0; i < SIZE; i++)
    {
        printf("Please Enter the Numbers [%d] ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < SIZE - 1; i++)
    {
        if ((is_descending && arr[i] < arr[i + 1]) ||
            (!is_descending && arr[i] > arr[i + 1]))
        {
            is_sorted = 0;
            break;
        }
    }
    if (is_sorted)
    {
        if (is_descending)
        {
            printf("This is Really Stored (Descending)\n");
        }
        else
        {
            printf("This is Really Sorted (Ascending)\n");
        }
    }
    else
    {
        printf("This is Not Sorted\n");
    }

    return 0;
}