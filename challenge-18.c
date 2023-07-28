#include <stdio.h>

/**
 * Write a Program that if the user add day from 1 --> 7 it prints the day name to the screen
 *
 */

int main()
{
    int number;
    printf("Enter the Week Day Please: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        printf("Invalid Number\n");
    }

    return 0;
}