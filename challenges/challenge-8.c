#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program to ask a user to choose between
 * 1 Million $ right now or  1 Cent doubles every day for the next 30 days
 *
 */

/** The PseudoCode Technique
BEGIN
    SET userChoice
    SET cents = 1
    PRINT "Choose one for $1,000,000 right now or choose two for daily $1 cent doubles: "
    INPUT userChoice

    IF userChoice == 1 THEN
        PRINT "Here is your $1,000,000. Congratulations!"
    ELSE IF userChoice == 2 THEN
        PRINT "Daily $1 cent doubles. What a wonderful choice!"
        FOR day = 1 TO 30
            PRINT "Day ", day, ": $", cents / 100.0
            SET cents = cents * 2
        END FOR
    END IF

    RETURN 0
END

 */

int main()
{
    int userChoice;
    long long cents = 1;
    // Prompt the user to choose between $1,000,000 now or daily $1 cent doubles
    printf("Choose one for $1,000,000 right now or choose two for daily $1 cent doubles: ");
    scanf("%d", &userChoice);

    // Check the user's choice and respond accordingly
    if (userChoice == 1)
    {
        printf("Here is your $1,000,000. Congratulations!\n");
    }
    else if (userChoice == 2)
    {
        printf("Daily $1 cent doubles. What a wonderful choice!\n");
        for (int day = 1; day <= 30; day++, cents *= 2)
        {
            printf("Day %d: $%.2f\n", day, cents / 100.0);
        }
    }

    return 0;
}

/*

In the loop that calculates the daily earnings, the value of cents is doubled on each iteration. 
However, the maximum value that an int variable can hold is limited by its size, which is typically 32 bits on most systems. 
If the value of cents reaches or exceeds the maximum value that an int variable can hold, it will wrap around to a negative value, which can produce unexpected results.
In this case, when you added more days to the loop,
the value of cents reached the maximum value that an int variable can hold and then wrapped around to a negative value, which caused the strange output you observed.
To fix this issue, you can use a larger data type like long long to store the value of cents. Here's an updated version of the code that uses long long:
*/