#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * ?Task
 * Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
 * Declare  variables: two of type int and two of type float.
 * Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
 * Use the  and  operator to perform the following operations:
 * Print the sum and difference of two int variable on a new line.
 * Print the sum and difference of two float variable rounded to one decimal place on a new line.
 *  ! expected out put
 * * Sample Input
 * 10 4
 * 4.0 2.0
 * 
 * * Sample Output
 * 14 6
 * 6.0 2.0
*/

int main()
{
    int num1, num2, sum1, sum2;
    float flo1, flo2, sumFlo1, sumFlo2;
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &flo1, &flo2);
    sum1 = num1 + num2;
    sum2 = num1 - num2;
    sumFlo1 = flo1 + flo2;
    sumFlo2 = flo1 - flo2;
    printf("%d %d\n", sum1, sum2);
    printf("%.1f %.1f\n", sumFlo1, sumFlo2);

    return 0;
}