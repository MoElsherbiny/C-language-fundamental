#include <stdio.h>
#include <stdlib.h>

/** Develop a Calculator that Reads Character (+ /  * ,- ,% ,);
 * Reads 2 numbers from user
 * use switch Case  to calculate and print results
 *
 */

/** Pseudocode technique
 * 1. Initialize variables num1, num2 as integers and mathOperation as a character
2. Print "Enter what math Operation would you like to use: ('+' ,'-' ,..) "
3. Scan the input character into mathOperation
4. Print "Enter num1: "
5. Scan the input integer into num1
6. Print "Enter num2: "
7. Scan the input integer into num2
8. Using switch case for mathOperation:
 a. If mathOperation is '+', print num1, mathOperation, num2, "=", num1 + num2
 b. If mathOperation is '/', print num1, mathOperation, num2, "=", num1 / num2
       i. If num2 is equal to 0, print "you can't divide by 0"
   c. If mathOperation is '-', print num1, mathOperation, num2, "=", num1 - num2
   d. If mathOperation is '*', print num1, mathOperation, num2, "=", num1 * num2
   e. If mathOperation is '%', print num1, mathOperation, num2, "=", num1 % num2
   f. If none of the above cases match, print "please try again with correct values"
9. Return 0 to end the program
*/
int main()
{
    int num1, num2;
    char mathOperation;
    printf("Enter what math Operation would you like to use: ('+' ,'-' ,..) ");
    scanf("%c", &mathOperation);
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    switch (mathOperation)
    {
    case '+':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 + num2);
        break;
    case '/':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 / num2);
        break;
    case '-':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 - num2);
        break;
    case '*':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 * num2);
        break;
    case '%':
        printf("%d %c %d = %d\n", num1, mathOperation, num2, num1 % num2);
        break;
        if (num2 == 0)
        {
            printf("you can't divide by 0 \n");
        }
    default:
        printf("please try again with correct values\n");
        break;
    }
    return 0;
}