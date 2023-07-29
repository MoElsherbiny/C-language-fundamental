#include <stdio.h>

/** Write a number is even or odd*/

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("This [%d]  is an Even number\n", number) : printf("This [%d] is  an odd number\n", number);
    return 0;
}