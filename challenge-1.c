#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that reads digits from user
 *  (representing your Phone number )
 * the program should find the INDEX of the "maximum value digit"
 * and print the index to the screen
 */

/*
1. Initialize an array of 7 integers representing a phone number
2. Set the first element of the array as the maximum value digit
3. Set the index of the maximum value digit to 0
4. For each element in the array:
    a. If the current element is greater than the maximum value digit:
        i. Update the maximum value digit to the current element
        ii. Update the index of the maximum value digit to the current index
5. Print the maximum value digit and its index
*/

int main()
{
    int phoneNumber[7] = {1, 4, 0, 2, 9, 10, 5};
    int maxDigit = phoneNumber[0];
    int index;
    for (int i = 0; i < 7; i++)
    {
        if (phoneNumber[i] > maxDigit)
        {
            index = i;
            maxDigit = phoneNumber[i];
        }
    }
    printf("The Max Digit is %d and it's index is %d \n", maxDigit, index);
    return 0;
}
/* Another solution but her the user add the numbers */

/*
int main()
{
    int numbers[7];
    int maxDigit = 0;
    int index;
    for (int i = 0; i < 7; i++)
    {
        printf("Enter the Number: %d = ", i+1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        if (maxDigit < numbers[i])
        {
            maxDigit = numbers[i];
            index = i;
        }
    }
    printf("The Max Digit is %d and the Index is %d\n", maxDigit, index);

    return 0;
}
*/