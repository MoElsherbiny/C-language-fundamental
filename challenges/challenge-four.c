#include <stdio.h>

/**
 * Write a Program that receives an integer representing seconds
 * the program should convert the given seconds into
 * 1- Total Hours
 * 2- Total Minutes
 * 3- Remaining seconds
 *
 */

/** The pseudocode Technique
1. Prompt the user to enter the number of seconds
2. Read the input value from the user and store it in a variable called "seconds"
3. Calculate the total number of hours by dividing "seconds" by 3600 and store the result in a variable called "hours"
4. Calculate the total number of minutes by dividing the remainder of "seconds" divided by 3600 by 60 and store the result in a variable called "minutes"
5. Calculate the remaining seconds by taking the remainder of "seconds" divided by 60 and store the result in a variable called "remainingSeconds"
6. Print out the result in the format: "X seconds is equivalent to Y hours, Z minutes, and W seconds."
 */

int main()
{

    int seconds;
    printf("can you provide the seconds you want to Calculate: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = (seconds % 60);
    printf(" %d seconds is equivalent to %d hours :%d minutes:%d secondes.\n", seconds, hours, minutes, remainingSeconds);
    return 0;
}