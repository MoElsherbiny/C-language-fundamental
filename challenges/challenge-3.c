#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that receives as input "valid" grade
 *  a legit grade is Greater than 0
 *  less than 100
 */



int main() {
    int grade;
    do {
        printf("Can you provide your grade: ");
        scanf("%d", &grade);
    } while (grade <= 0 || grade >= 100);
    printf("Thanks for entering %d, which is a valid grade.\n", grade);
    return 0;
}