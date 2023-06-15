#include <stdio.h>

/* Creating an app that Calculate your born year */

// pseudocode technique
/*
1- Creating two variables one for current year other for age
2- use scanf()` function to reads input from the standard input stream (usually the keyboard)
 and stores it in the integer variable `Current year , age`.
3- use printf() to print the out put
4 - return 0;return value of 0 from the main() function indicates 
that the program executed successfully without any errors.
*/

int main()
{
    int currentYear;
    int yourAge;
    scanf("%d", &currentYear);
    scanf("%d", &yourAge);
    printf(" Your were Born in  %d \n",currentYear-yourAge);
    return 0;
}