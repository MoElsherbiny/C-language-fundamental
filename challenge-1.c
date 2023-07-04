#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Function That Calculate The Area of a Rectangle
 * 1- Receive "Height" and "Width"
 * 2- Calculate and return the AREA
 */

float calcArea(float height, float width)
{
    float area = height * width;
    return area;
}
int main()
{
    float a, b;
    float area;
    printf("Enter The height: ");
    scanf("%f", &a);
    printf("Enter The Width: ");
    scanf("%f", &b);
    area = calcArea(a, b);
    printf("Here is The Area between The hight and width: %f\n", area);
    return 0;
}