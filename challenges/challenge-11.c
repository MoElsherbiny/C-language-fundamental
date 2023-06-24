#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that checks if the given year is leap year
 * as there is a years is 365 days and others 366 days in a year
 * that is because of february some times is 28 and other time is 29 that is why
 * we have a leap year with 366 days
 * A year is a leap year if it meets one of the following conditions:
 * 1. The year is divisible by 4, but not divisible by 100, unless it is also divisible by 400. For example, the year 2000 is a leap year because it is divisible by 400, but the year 1900 is not a leap year because it is divisible by 100 but not by 400.
 * 2. The year is divisible by 4 and also divisible by 100 and divisible by 400. For example, the year 1600 is a leap year because it is divisible by 4, 100, and 400.
 * Here's the step-by-step logic to determine if a year is a leap year:
 * 1. Check if the year is divisible by 4. If it is not divisible by 4, it is not a leap year.
 * 2. If the year is divisible by 4, check if it is divisible by 100. If it is divisible by 100, go to step 3, otherwise go to step 4.
 * 3. If the year is divisible by 100, check if it is divisible by 400. If it is divisible by 400, it is a leap year, otherwise it is not a leap year.
 * 4. If the year is not divisible by 100, it is a leap year.
 * Using this logic, we can determine if a year is a leap year or not.
 * 
 */

int main()
{
    int year;
    printf("Can you provide the year you want to check: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("That %d year is a leap year\n", year);
    }
    else
    {
        printf("That %d year is not a leap year\n", year);
    }
    return 0;
}