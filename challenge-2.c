#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/**
 * The code we use here is the same as the {Challenge-1} but the difference we will use define
 *? So What is Define in C ?
 * In C, `#define` is a preprocessor directive that is used to define a constant or a macro substitution.
 *  It creates a macro, which is the association of an identifier or parameterized identifier with a token string.
 *  After the macro is defined, the compiler can substitute the token string for each occurrence of the identifier in the source file¹.

For example, if you have `#define MAXLINE 5000`,
 then every occurrence of `MAXLINE` in the source file will be replaced by `5000` during preprocessing.
  It's important to note that `#define` is a simple text substitution and has no type.

*! So Define is helping us not to go wrong while defining any constant
 */

int main()
{
    int numbers[SIZE];
    int maxDigit = 0;
    int index;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter the Number: %d = ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (maxDigit < numbers[i])
        {
            maxDigit = numbers[i];
            index = i;
        }
    }
    printf("The Max Digit is %d and the Index is %d\n", maxDigit, index);

    return 0;
}