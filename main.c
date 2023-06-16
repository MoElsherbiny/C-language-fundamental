#include <stdio.h>

/** n-th term of and Arithmetic Sequence
 * an = a1 + (n-1)*d
 */

/**
 * *Declare variables a1, d, and n as floats and an integer, respectively.
 * Prompt the user to enter the initial term (a1) of the arithmetic sequence.
 * *Read in the value of a1 using scanf() and store it in the variable a1.
 * Prompt the user to enter the common difference (d) of the arithmetic sequence.
 * *Read in the value of d using scanf() and store it in the variable d.
 * Prompt the user to enter the number of elements (n) in the arithmetic sequence.
 * *Read in the value of n using scanf() and store it in the variable n.
 * ?Calculate the nth term of the arithmetic sequence using the formula a1 + (n - 1) * d.
 * *Print the value of the nth term using printf().
 * Return 0 to indicate successful program execution
*/
int main()
{
    float a1, d;
    int n;
    printf("Enter the Initial Term (a1): ");
    scanf("%f", &a1);
    printf("Enter the difference in the Arithmetic Sequence: ");
    scanf("%f", &d);
    printf("Enter the number of elements in the Arithmetic Sequence: ");
    scanf("%d", &n);
    printf("The n-th term of the Arithmetic Sequence = %f\n", a1 + (n - 1) * d);

    return 0;
}