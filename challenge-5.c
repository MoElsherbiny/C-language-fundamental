#include <stdio.h>
#include <stdlib.h>

/**
 * Write a Function that Receives some Numbers --> "length"
 * Return --->  444..4
 * Example :
 * length = 3 ---> 444
 * length = 5 ---> 44444
 */
int number(int length)
{
    int i;
    int startedNumber = 0;
    int requestedNumber;
    printf("Enter the number: ");
    scanf("%d", &requestedNumber);
    for (i = 0; i < length; i++)
    {
        startedNumber = startedNumber * 10 + requestedNumber;
    }
    return startedNumber;
}
int main()
{
    int lengthSeq;
    int results;
    printf("Enter the length for the n-th sequence: ");
    scanf("%d", &lengthSeq);
    results = number(lengthSeq);
    printf("Results = %d\n", results);
    return 0;
}