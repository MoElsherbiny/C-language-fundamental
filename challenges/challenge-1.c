#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program that receives as input two values as input
 * two values
 * 1--> number
 * 2--> pow
 * the program should calculate the result of num * pow and print it to the screen
 *
 */

/* The Pseudocode Technique
1. Initialize variables num, pow, tempPow, and result to 0 or 1 as appropriate
2. Prompt the user to enter a number using printf
3. Read the user input and store it in the num variable using scanf
4. Prompt the user to enter a power using printf
5. Read the user input and store it in the pow variable using scanf
6. Set the value of tempPow to pow
7. Use a while loop that runs while pow is greater than 0
8. Inside the while loop, multiply the result by num and decrement pow because if we didn't we will be in infinite loop
9. After the while loop, print the result using printf
10. Return 0 to indicate successful program execution
*/

int main()
{
    int num, pow;
    int tempPow;
    int result = 1;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Enter a Power: ");
    scanf("%d", &pow);
    tempPow = pow;
    while (pow > 0)
    {
        result = result * num;
        pow--;
    }
    printf("%d in the power of %d = %d \n", num, pow, result);

    return 0;
}