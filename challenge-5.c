#include <stdio.h>
#include <stdlib.h>
#define DATE 3

/**
 * Write a Program that initializes an Array of
 * 3 Elements should represent a data Day,Month ,Year
 * and Once you do so Copy this initalized this array
 * with the additional array you've just declared
 */


int main()
{
    int date[DATE] = {23, 7, 2023};
    int date_2[DATE];
    int i;
    for (i = 0; i < DATE; i++)
    {
        date_2[i] = date[i];
    }
    for (i = 0; i < DATE; i++)
    {
        printf("The Original Date[%d] = %d\n", i, date[i]);
        printf("The Copied Date[%d] = %d\n", i, date_2[i]);
    }
    return 0;
}