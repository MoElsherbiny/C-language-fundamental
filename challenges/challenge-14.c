#include <stdio.h>
#include <stdlib.h>

/**
 * Write an Efficient Program that receives a "num" from the user
 * The program should calculate and print the sum of all numbers
 * from 1 up to num that can be divided by 3 And by 6
 */

/**The Pseudocode Technique
 *  1. Declare variables num and sum as integers and set sum to 0
 * 2. Prompt the user to enter a positive integer and store it in num
 * 3. Use a for loop to iterate from 1 to num
 * 4. Print the sum of all numbers from 1 to num that can be divided by both 3 and 6 using printf()
 *   a. If the current number i is divisible by both 3 and 6 (i.e., i % 3 == 0 && i % 6 == 0), add it to the sum variable
 * 5. End the program
 */
int main(void)
{
    // Declare variables
    int num, currentNum, sum = 0;

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Loop through numbers from 1 to num
    for (currentNum = 1; currentNum <= num; currentNum++)
    {
        // Check if current number is divisible by both 3 and 6
        if (currentNum % 3 == 0 && currentNum % 6 == 0)
        {
            // Add current number to sum
            sum += currentNum;

            // Print the current number
            printf("%d\n", currentNum);
        }
    }

    // Print the sum of all numbers that are divisible by both 3 and 6
    printf("The sum of numbers from 1 to %d that can be divided by both 3 and 6 is %d\n", num, sum);

    return 0;
}