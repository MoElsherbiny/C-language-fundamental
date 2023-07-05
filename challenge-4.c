#include <stdio.h>
#include <stdlib.h>

/**
 * A function to check whether a given integer is even.
 * 
 * @param num the integer to check
 * @return 1 if the number is even, 0 otherwise
 */
int isEven(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int result = isEven(num);
    printf("%d is %s\n", num, result ? "even" : "odd");
    return 0;
}