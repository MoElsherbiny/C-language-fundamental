#include <stdio.h>
#include <stdlib.h>

/**
 * Write an Efficient Program that receives a "num" from the user
 * The program should calculate and print the sum of all numbers
 * from 1 up to num that can be divided by 3 or by 5
 */

/**The Pseudocode Technique
 *  1. Declare variables num and sum as integers and set sum to 0
 * 2. Prompt the user to enter a positive integer and store it in num
 * 3. Use a for loop to iterate from 1 to num
 * 4. Print the sum of all numbers from 1 to num that can be divided by both 3 and 6 using printf()
 *   a. If the current number i is divisible by both 3 or 6 (i.e., i % 3 == 0 && i % 6 == 0), add it to the sum variable
 * 5. End the program
 */
int main(void)
{
    int number, i, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    printf("The sum of numbers from 1 to %d that can be divided by both 3 and 5 is %d\n", number, sum);
    return (0);
}