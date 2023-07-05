#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Write a function With a name tolower
 * Receive a character
 * iF this character is a Upper Case letter ("A","B",...,"z")
 *          Return the lower Case Letter ("a","b",...,"z")
 * OtherWise, Return -1;
 */

char toLower(char character)
{
    if (character >= 'A' && character <= 'Z')
    {
        return character - 'A' + 'a';
    }
    else
    {
        return -1;
    }
}

char toUpper(char character)
{
    if (character >= 'a' && character <= 'z')
    {
        return character - 'a' + 'A';
    }
    else
    {
        return -1;
    }
}

int main()
{
    char letter[100];
    printf("Enter the text to convert: ");
    fgets(letter, 100, stdin);
    for (int i = 0; i < strlen(letter); i++)
    {
        if (letter[i] >= 'A' && letter[i] <= 'Z')
        {
            printf("%c", toLower(letter[i]));
        }
        else if (letter[i] >= 'a' && letter[i] <= 'z')
        {
            printf("%c", toUpper(letter[i]));
        }
        else
        {
            printf("%c", letter[i]);
        }
    }
    printf("\n");
    return 0;
}
