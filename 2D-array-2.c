#include <stdio.h>
#include <stdlib.h>

/**
 * input to Element Example let the user add the data of the Array
 */
/** PseudoCode Technique
 * 1. Declare a 2D integer array of size 2x3
2. For each row i from 0 to 1
    a. For each column j from 0 to 2
        i. Prompt the user to enter data at index [i][j]
        ii. Store the entered data in the array at index [i][j]
3. Print "Data entered by user:"
4. For each row i from 0 to 1
    a. For each column j from 0 to 2
        i. Print the data stored in the array at index [i][j]
    b. Print a newline character
5. End

 *
*/
int main()
{
    int mat[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the array data at index [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Data entered by user: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}