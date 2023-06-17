#include <stdio.h>

/**
 * write a program that receives salary month
 * salary (per hours);
 * total hours worked (in the month)
 */

/** the Pseudocode for this challenge
 * initializing 3 variables  { salary , WorkedHours , Total  salary * worked hours }
 * printf("asking the user to give his salary per hour")
 * scanf("to store the data from user")
 * printf("asking the user how much hours did he worked this month")
 * scanf("to store the data of hours")
 * print the Total salary
 *
 */

int main()
{
    float salary, totalHours, totalSalary;
    printf("What is your salary per hour ? :\n ");
    scanf("%f", &salary);
    printf("How much hours did you worked this month ? :\n");
    scanf("%f", &totalHours);
    totalSalary = salary * totalHours;
    printf("your monthly salary is : %.f$\n", totalSalary);
    return 0;
}