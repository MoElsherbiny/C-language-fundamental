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
    char ch[100];
    scanf("%[^\n]%*c", ch);
    printf("%s \n", ch);
    printf("Language\n");
    printf("Welcome To C!!\n");
    return 0;
}