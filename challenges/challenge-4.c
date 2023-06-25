#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program that receives as input two values
 * number and power like  2^3
 * the program should calculate the results of "num^power"
 * Print the result to the screen
 * just use for loop condition in this challenge
 */

/* pseudoCode Technique
1. Prompt the user to enter a number and read in the input as num
2. Prompt the user to enter a power and read in the input as power
3. Set the variable results equal to 1
4. For each value of i from 0 to power-1 do the following:
    a. Multiply results by num
5. Print the result to the screen in the format "The value of num ^ power is = results"
6. Exit the program
 */

int main()
{
    int number, power, outcomes = 1;
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the desired addition's power of the number.: ");
    scanf("%d", &power);
    for (int i = 0; i < power; i++)
    {
        outcomes *= number;
    }
    printf("Value of %d^%d is = %d\n", number, power, outcomes);
    return 0;
}

/**
 * Explanation for the for ..loop condition
 * num = 10 and pow = 3: These are the values entered by the user.
 * The loop condition is i < pow, 
 * which means the loop will execute as long as i is less than pow. 
 * Since pow is 3, the loop will execute 3 times.
 * i = 0  outcomes = 1 * 10 =10
 * i = 1 outcomes = 10 * 10 =100
 * i = 2 outcomes = 100 * 10 = 1000 
 * End of the loop
 * 
*/