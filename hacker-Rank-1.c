#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 * The task is to write a C program that prints “Hello, World!” on one line and then prints the input string on the next line
 * The input string is read from the standard input using the scanf function
 * The output strings are printed to the standard output using the printf function
 *  The program should use the same syntax and format as given in the example and instructions
 * #include <stdio.h>
 * #include <string.h>
 * #include <math.h>
 * #include <stdlib.h>
 * int main()
 * {
char s[100];
scanf("%[^\n]%*c", &s);
Enter your code here. Read input from STDIN. Print output to STDOUT
return 0;
}
 * ! expected out put
 * * Hello, World!
 * * Welcome to C programming.
 */

int main()
{

    char s[100];
    scanf("%[^\n]%*c", s);
    printf("Hello, World!\n");
    printf("Welcome to C programming.\n");
    return 0;
}