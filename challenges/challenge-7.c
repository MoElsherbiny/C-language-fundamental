#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that receives an integer-"num"
 * the program should print a right-angel triangle
 * with the following pattern up to a given "n"
 * 1
 * 22
 * 333
 * 4444 so on
 */

/*
1. Declare integer variables num, i, and j
2. Prompt the user to enter the starting number and read in the input with scanf()
3. For each value of i from 1 to num, do the following:
    a. For each value of j from 1 to i, do the following:
        i. Print the value of i to the screen
    b. Print a newline character to the screen
4. Exit the program*/
int main()
{
    int number;
    int i, j;
    printf("Enter the Number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}