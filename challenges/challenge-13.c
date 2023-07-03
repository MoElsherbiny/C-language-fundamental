#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program that receives an integer = "n"
 * The program should print a Pyramid of Numbers with the following
 * pattern
 *    1
 *   2 3
 *  4 5 6
 *
 */

/*
 1. Initialize variables n, i, k, j, currentValue and blankSpaces
2. Output "Enter the number of rows in pyramid: "
3. Read input for n
4. Set blankSpaces to n - 1
5. Loop i from 1 to n
   a. Loop k from blankSpaces to 1
      i. Output " "
   b. Loop j from 1 to i
      i. Output currentValue followed by a space
      ii. Increment currentValue by 1
   c. Output a newline character
   d. Decrement blankSpaces by 1
6. Exit program with status 0
*/

int main(void)
{
    int n, i, k, j, currentValue = 1;
    int blankSpaces;
    printf("Enter the number of rows in pyramid: ");
    scanf("%d", &n);
    blankSpaces = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (k = blankSpaces; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", currentValue);
            currentValue++;
        }
        printf("\n");
        blankSpaces--;
    }
    return (0);
}