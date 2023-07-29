#include <math.h>
#include <stdio.h>

/**
 * Write a  Function prototype of sqrt()
 * The sqrt() function takes a single argument (in double) and returns its square root (also in double).
 * To find the square root of int, float or long double data types, you can explicitly convert the type to double using cast operator.
 * * int x = 0;
 * * double result;
 * * result = sqrt((double)x)
 */

int main() {
   double number, squareRoot;

   printf("Enter a number: ");
   scanf("%lf", &number);

   // computing the square root
   squareRoot = sqrt(number);

   printf("Square root of %.2lf =  %.2lf", number, squareRoot);

   return 0;
}