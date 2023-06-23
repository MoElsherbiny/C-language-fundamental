#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program that receives a number representing a month
 * (1-12) and prints the month name
 */

#include <stdio.h>

int main()
{
    int month;
    printf("Could you please supply a number along with the month you wish to know?");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("The month is January, which is the %d month.\n", month);
        break;
    case 2:
        printf("The month is February, which is the %d month.\n", month);
        break;
    case 3:
        printf("The month is March, which is the %d month.\n", month);
        break;
    case 4:
        printf("The month is April, which is the %d month.\n", month);
        break;
    case 5:
        printf("The month is May, which is the %d month.\n", month);
        break;
    case 6:
        printf("The month is June, which is the %d month.\n", month);
        break;
    case 7:
        printf("The month is July, which is the %d month.\n", month);
        break;
    case 8:
        printf("The month is August, which is the %d month.\n", month);
        break;
    case 9:
        printf("The month is September, which is the %d month.\n", month);
        break;
    case 10:
        printf("The month is October, which is the %d month.\n", month);
        break;
    case 11:
        printf("The month is November, which is the %d month.\n", month);
        break;
    case 12:
        printf("The month is December, which is the %d month.\n", month);
        break;

    default:
        printf("Try again with valid values");
        break;
    }

    return 0;
}