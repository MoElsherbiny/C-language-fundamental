#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

/**
 * Create a C program that generates a multiplication table and prints it to the console.
 *  Use a 2-dimensional array with dimensions of 11x11 to store the values of the table.
 *  Populate the array with values representing the multiplication of the row index and the column index using nested for-loops. Finally,
 *  print the resulting multiplication table to the console using another set of nested for-loops.
 *  Feel free to modify the SIZE constant to change the dimensions of the array and the range of the multiplication table
 */

/**
 *! PseudoCode Technique
 *  1. Define a constant SIZE with value 11
2. Declare a two-dimensional array mat of size SIZE x SIZE
3. For i from 1 to SIZE-1:
4.     For j from 1 to SIZE-1:
5.         Set mat[i][j] to the product of i and j
6. For i from 1 to SIZE-1:
7.     For j from 1 to SIZE-1:
8.         Print the value of mat[i][j] with a width of 5 characters
9.     Print a newline character
10. End the program

*/
int main()
{
    int i, j;
    int mat[SIZE][SIZE];
    for (i = 1; i < SIZE; i++)
    {
        for (j = 1; j < SIZE; j++)
        {
            mat[i][j] = i * j;
        }
    }
    for (i = 1; i < SIZE; i++)
    {
        for (j = 1; j < SIZE; j++)
        {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}