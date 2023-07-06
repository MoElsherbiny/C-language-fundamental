#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that initializes an array of digits (of your phone number)
 * For Example : 123456789 ---> 1,2,3,..
 * The Program should find the Max digit and print it to the screen
 */

int main()
{
    int phoneNumber[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int maxDigits = phoneNumber[0];
    for (int i = 0; i < 9; i++)
    {
        if (phoneNumber[i] > maxDigits)
        {
            maxDigits = phoneNumber[i];
        }
    }
    printf("The max digit is = %d\n", maxDigits);
    return 0;
}