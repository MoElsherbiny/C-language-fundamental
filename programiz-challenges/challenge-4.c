#include <stdio.h>
#include <stdbool.h>
/**
 *  Check Whether the Entered Year is Leap Year or not
 */
/*
int main()
{
    int year;
    printf("Enter the year to check it a leap year or not: ");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("The [%d] year  is a leap year \n", year);
    }
    else
    {
        printf("The [%d] year is not a leap year \n", year);
    }
    return 0;
}

*/
bool is_leap_year(int year)
{
    return ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0));
}

int main()
{
    int year;
    bool valid;
    do
    {
        printf("Enter the year to check it a leap year or not: ");
        scanf("%d", &year);
        valid = (year > 0);
        if (!valid)
        {
            printf("Invalid input. Please enter a positive year.\n");
        }

    } while (!valid);

    bool result = is_leap_year(year);
    if (result)
    {
        printf("The [%d] year  is a leap year \n", year);
    }
    else
    {
        printf("The [%d] year is not a leap year \n", year);
    }
    return 0;
}