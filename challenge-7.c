#include <stdio.h>
#include <stdlib.h>

/**
 * Function that receives 3 characters
 * if all the characters are of a digit type ("0"--> '9')
 *      an integer which is a decimal representation of this 3 digits number
 * otherWise ,return 0.
 * Example '2','3' ,'9'
 *      Return 239
 */

int digitsToInt(char char1, char char2, char char3)
{
    if (char1 >= '0' && char1 <= '9' && char2 >= '0' && char2 <= '9' && char3 >= '0' && char3 <= '9')
    {
        int d1 = char1 - '0';
        int d2 = char2 - '0';
        int d3 = char3 - '0';
        return d1 * 100 + d2 * 10 + d3;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char c1, c2, c3;
    printf("Enter three digits: ");
    scanf("%c%c%c", &c1, &c2, &c3);
    int result = digitsToInt(c1, c2, c3);
    if (result == 0)
    {
        printf("Not all characters are digits.\n");
    }
    else
    {
        printf("The decimal representation is %d.\n", result);
    }
    return 0;
}