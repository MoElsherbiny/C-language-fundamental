#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * write a program that calculates the distance between two points
 * (X1 ,Y1)  <-----> (X2, Y2)
 *  distance = sqrt((x1 -x2)^2 + (y1-y2)^2)
 * recommendation for this Task use next line command in your terminal
 * gcc -o challenge-six challenge-six.c -lm
 * ./challenge-six
 */

int main()
{
    float x1, y1, x2, y2;
    float distance;
    printf("Enter X1: ");
    scanf("%f", &x1);
    printf("Enter Y1: ");
    scanf("%f", &y1);
    printf("Enter X2: ");
    scanf("%f", &x2);
    printf("Enter Y2: ");
    scanf("%f", &y2);

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    printf("The distance between Two points is (%.2f,%.2f) and (%.2f,%.2f) is  %.2f\n", x1, y1, x2, y2, distance);
    return 0;
}