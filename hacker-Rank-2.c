#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * ? Task:
 *  This program takes a character, a string, and a sentence as input and prints them on separate lines.
 * The first line prints the character, the second line prints the string, and the third line prints the sentence.
 * ! expected out put
 * * C
 * * Language
 * * Welcome To C!!
 */
int main()
{
    char ch;
    char str[100];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s", str);
    scanf(" %[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sen);
    return 0;
}