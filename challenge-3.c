#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/**
 * Write a Program the Creates an array of integer
 * The program should check and print
 *  if the array has at least one element with "Good neighbour"
 * An element with good neighbors has a value the equals to the
 * multiplication of it's neighbors (right ,left)
 * Example #1 - [1,3,2,6,3] --> Array has "Good Neighbour"
 * Example #2 - [4,4,7,4,9] --> Array doesn't have "Good Neighbour"
 */

/*
1. Initialize an array of integers
2. Set a flag variable to indicate if a good neighbor has been found to 0
3. Read the array elements from the user
4. For each element in the array, starting from the second element and ending at the second to last element:
    a. If the current element is equal to the multiplication of its left and right neighbors:
        i. Print that the array has a "Good Neighbor"
        ii. Set the flag variable to 1
        iii. Exit the loop
5. If the flag variable is still 0:
    a. Print that the array doesn't have a "Good Neighbor"
*/

int main()

{
    int array[SIZE];
    int index;
    int hasGoodNeighbors = 0; // -->flag variable to keep track of whether or not a good neighbor has been found.
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter The Numbers You Want Check:%d = ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 1; i < SIZE - 1; i++)
    {
        if (array[i] == array[i - 1] * array[i + 1])
        {
            printf("Array has 'Good Neighbour'\n");
            hasGoodNeighbors = 1;
            break;
        }
    }
    if (hasGoodNeighbors == 0)
    {
        printf("Array doesn't have 'Good Neighbour'\n");
    }
    return 0;
}