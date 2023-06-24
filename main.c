#include <stdio.h>

/**
 * Writing a Program that gets a number of asterisks
 * the program should print to the screen the  specified number of
 * asterisks *
 */

/* The PseudoCode Technique
 1. Initialize two variables, asterisks and i, to 0
2. Prompt the user to enter the number of asterisks to print on the screen using printf
3. Read the user input using scanf and store it in the asterisks variable
4. Use a while loop that runs while i is less than the value of asterisks
5. Inside the while loop, print an asterisk using printf and increment i
6. After the while loop, print a newline character using printf
7. Return 0 to indicate successful program execution
*/
int main()
{
    int asterisks;
    int i = 0;
    printf("Can yo u Provide how many asterisks you want to print on Screen: ");
    scanf("%d", &asterisks);
    while (i < asterisks)
    {
        printf("*");
        i++;
    }
    printf("\n");
    return 0;
}