#include <stdio.h>

/**
 * Write a Program Check whether a character is a vowel or consonant
 * as the vowel is [a e i o u y]
 * all others characters is consonant
 */

int main()
{
    char ch;
    printf("Enter the [character] you want to check:  ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("This [%c] is a vowel character  \n", ch);
        break;
    case 'e':
        printf("This [%c] is a vowel character  \n", ch);
        break;
    case 'i':
        printf("This [%c] is a vowel character  \n", ch);
        break;
    case 'o':
        printf("This [%c] is a vowel character  \n", ch);
        break;
    case 'u':
        printf("This [%c] is a vowel character  \n", ch);
        break;
    case 'y':
        printf("This [%c] is a vowel character  \n", ch);
        break;
    default:
        printf("This [%c]  is a consonant character:  \n", ch);
    }

    return 0;
}
