#include <stdio.h>
#include <stdlib.h>
#define PUSHUPS 10
/**
 * Write a Program That Display the Values in A Reverse Order
 */

int main()
{
    int array[PUSHUPS];
    for (int i = 0; i < PUSHUPS; i++)
    {

        printf("Enter The PushUps %d =  ", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("Day %d You made %d PushUps:  \n", 10 - i , array[i]);
    }
    return 0;
}