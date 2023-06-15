#include <stdio.h>

/* write a program that calculate the given grades with
  3 grades (int) from the user and the program should
  print the Exact average between them
  */

/* pseudocode technique*/
/*
1. Initialize 3 variables
2. Initialize the average with double
3.Print prompt "Enter grade1:" to ask the user to enter grade1.
4.Read the value of grade1 from the user using scanf() and store it in the grade1 variable.
5.Print prompt "Enter grade2:" to ask the user to enter grade2.
6.Read the value of grade2 from the user using scanf() and store it in the grade2 variable.
7.Print prompt "Enter grade3" to ask the user to enter grade3.
8.Read the value of grade3 from the user using scanf() and store it in the grade3 variable.
9.calculate the Average  and / 3.0 So by using 3.0 instead of just 3, we ensure that the result of the division, and therefore the average, will be a decimal number instead of an integer.
10. print the final output
*/

int main()
{
    int grade1, grade2, grade3;
    double average;
    printf("Enter grade1 ");
    scanf("%d", &grade1);
    printf("Enter grade2 ");
    scanf("%d", &grade2);
    printf("Enter grade3 ");
    scanf("%d", &grade3);
    average = (grade1 + grade2 + grade3) / 3.0;
    printf("Average = %.1f \n", average);
}
