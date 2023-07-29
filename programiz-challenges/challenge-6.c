#include <stdio.h>

/**
 * Checker whether a character is an alphabet or not
 * alphabet if its ASCII value is between 65 and 90 or 97 and 122. Otherwise, it is not an alphabet.
 */

int main()
{
    char character;
    printf("Enter the character: ");
    scanf(" %c", &character);

    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
    {
        printf("This is an alphabet: %c\n", character);
    }
    else
    {
        printf("This is not an alphabet: \n");
    }
    return 0;
}