#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Program that receives a coordinate point in XY system .
 * The program should print in which quadrant the point is at
 */

/**
 * Quadrant 1 ---> both X,Y have a Positive Values
 * Quadrant 2 ---> X has Negative Value and Y has a Positive Value
 * Quadrant 3 ---> both X ,Y have a Negative Values
 * Quadrant 4 ---> X has a Positive Value and Y has a Negative Value
 */

int main()
{
    float x, y;
    printf("Enter the X coordinate: ");
    scanf("%f", &x);
    printf("Enter the y coordinate: ");
    scanf("%f", &y);
    if (x > 0 && y > 0)
    {
        printf("The point (%.2f, %.2f) is in Quadrant I.\n", x, y);
        printf("This quadrant is located in the upper right-hand corner of the XY plane.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point (%.2f, %.2f) is in Quadrant II.\n", x, y);
        printf("This quadrant is located in the upper left-hand corner of the XY plane.\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point (%.2f, %.2f) is in Quadrant III.\n", x, y);
        printf("This quadrant is located in the bottom left-hand corner of the XY plane.\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point (%.2f, %.2f) is in Quadrant IV.\n", x, y);
        printf("This quadrant is located in the bottom right-hand corner of the XY plane.\n");
    }
    return 0;
}