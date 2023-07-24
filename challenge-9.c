#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
/**
 * Write a Program That prints all unique Elements in an Array
 * Count the number of Unique Elements in an Array
 */

int main()

{
    int arr[SIZE] = {2, 3, 4, 5, 6, 2};
    int i, j;
    int unique_count = 0;
    for (i = 0; i < SIZE; i++)

    {
        int is_unique = 1;
        for (j = 0; j < SIZE; j++)
        {
            if (i != j && arr[i] == arr[j])
                is_unique = 0;
            break;
        }
        if (is_unique)
        {
            printf("%d is unique Number\n", arr[i]);
            unique_count++;
        }
    }

    printf("There are %d unique Elements in the array\n", unique_count);
    return 0;
}