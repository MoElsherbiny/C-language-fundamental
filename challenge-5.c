#include <stdio.h>

/**
 * Write a C program to find ASCII value of a character entered by the user
 */

int main()
{
    char chr;
    printf("Enter the character that you want check ASCII value: ");
    scanf("%c", &chr);
    // %d displays the integer value of a character
    printf("The ASCII value of a character %c  is %d\n", chr, chr);

    return 0;
}