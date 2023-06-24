#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program that receives a day,month and year
 * the program should find and print the next day on the calendar
 *
 */

int main()
{
    int day, month, year;
    int leapYear = 0;
    printf("Enter the day: ");
    scanf("%d", &day);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);
    // Check if the given year is leap or not;
    if (month == 2)
    {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            leapYear = 1;
        }
    }
    day += 1;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (day > 31)
        {
            day = 1;
            month += 1;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day > 30)
        {
            day = 1;
            month += 1;
        }
        break;
    case 2:
        if (day > 28 + leapYear)
        {
            day = 1;
            month += 1;
        }
        break;
    default:
        day = 1;
        month += 1;
        if (month > 12)
        {
            month = 1;
            year += 1;
        }
        break;
    }
    printf("The next day is %d %d %d\n", day, month, year);
    return 0;
}