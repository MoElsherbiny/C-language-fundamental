#include <stdio.h>

/* Write a Program that gets two "double numbers" 
1.Rectangle Height
2.Rectangle Width
*/

// pseudocode technique
/*
1. Initialize variables height, width, and area as doubles.
2. Print prompt "Enter height:" to ask the user to enter height.
3. Read the value of height from the user using scanf() and store it in the height variable.
4. Print prompt "Enter width:" to ask the user to enter width.
5. Read the value of width from the user using scanf() and store it in the width variable.
6. Calculate the area of the rectangle by multiplying height and width and store the result in the area variable.
7. Print the result using printf() with the format specifier "%f".
8. End the program.
*/


int main()
{
    double height, width;
    double area;
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Enter width: ");
    scanf("%lf", &width);
    area = height * width;
    printf("The area of the rectangle = %1f\n", area);
    return 0;
}