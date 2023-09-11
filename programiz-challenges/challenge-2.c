#include <stdio.h>

/**
 * Create a Function with two Parameter and use return statement 
*/

int parameterFun(int numberOne, int numberTwo)
{
    int sum = numberOne + numberTwo;
    return sum;
}

int main()
{
 int sum =  parameterFun(10, 9);
    printf("The sum is = %d\n", sum);
 
    return (0);
}