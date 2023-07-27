#include <stdio.h>

/**
 * Write a Program C program to demonstrate the working of keyword long
 */

int main()

{
    int a;
    long b;
    long long c;
    long int d;
    double e;
    long double f;
    printf("The size of int = %zu bytes \n", sizeof(a));
    printf("The size of long = %zu bytes \n", sizeof(b));
    printf("The size of long long = %zu bytes \n", sizeof(c));
    printf("The size of long int = %zu bytes \n", sizeof(d));
    printf("The size of double = %zu bytes \n", sizeof(e));
    printf("The size of long double = %zu bytes \n", sizeof(f));

    return 0;
}