#include <stdio.h>
#include <stdlib.h>

/**
 * Develop a Unique Average Garde Calculator
 * The Calculator should receive grades from user - until a "stopping Condition" is
 * met
 * The program should Calculate the average grade and print it
 */

/**
1. Initialize variables grade, average, total, and gradeCount to appropriate values
2. Prompt the user to enter a grade or '-1' to stop using printf
3. Read the user input and store it in the grade variable using scanf
4. Use a while loop that runs until grade is equal to -1
5. Inside the while loop, add the grade to the total variable, increment the gradeCount variable, and prompt the user to enter another grade using printf
6. Read the user input and store it in the grade variable using scanf
7. After the while loop, calculate the average grade by dividing the total by the gradeCount and storing the result in the average variable
8. Print the number of grades entered using printf
9. Print the average grade to the screen using printf
10. Return 0 to indicate successful program execution
*/

int main()
{
    int grade;
    int total = 0, gradesCount = 0;
    printf("Please enter your grades or press '-1' to exit.: ");
    scanf("%d", &grade);
    while (grade != -1)
    {
        total = total + grade;
        gradesCount++;
        printf("Please enter your grades or press '-1' to exit.: ");
        scanf("%d", &grade);
    }
    printf("You have Entered %d grades\n", gradesCount);
    printf("Here's your overall grade: %f\n", (float)total / gradesCount);
    if (total / gradesCount >= 80)
    {
        printf("It's astonishing how well you're doing academically.\n");
    }
    else
    {
        printf("Work diligently to further your education. materials to earn higher grades\n");
    }
    return 0;
}