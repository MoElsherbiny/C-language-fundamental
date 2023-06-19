#include <stdio.h>

/**
 * write a program that receives a number with 4 digits
 * the program should print the reversed number of ' num '
 */

//? The pseudocode technique
/*
1. Prompt the user to enter a 4-digit number
2. Read the input value from the user and store it in a variable called "num"
3. Initialize a variable called "reversedNum" to 0
4. Repeat the following steps 4 times:
    a. Multiply "reversedNum" by 10 and add the last digit of "num" to it
    b. Remove the last digit from "num" by dividing it by 10
5. Print out the value of "reversedNum" as the reversed number

*/

int main()
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int reversedNum = 0;
    for (int i = 0; i < 4; i++)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    printf("The reversed number is: %d\n", reversedNum);
    return 0;
}

/**
 * for (int i = 0; i < 4; i++){
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
 * These two lines of code are part of a loop that is executed 4 times to reverse a 4-digit number.
 * The variable reversedNum is used to store the reversed number, and the variable num is the original 4-digit number entered by the user.
 * In each iteration of the loop, the last digit of num is obtained using the modulus operator (%).
 * The expression num % 10 gives the remainder when num is divided by 10, which is the last digit of num.
 *  This digit is then added to reversedNum after multiplying it by 10
 * . This has the effect of shifting the digits of reversedNum to the left and adding the new digit to the rightmost position.
 * After adding the last digit of num to reversedNum, the last digit is removed from num by dividing it by 10 using integer division (/=).
 * This has the effect of shifting the digits of num to the right and discarding the last digit.
 * By repeating these steps 4 times, all 4 digits of num are processed in reverse order and added to reversedNum, resulting in the reversed number.
*/

/* Other solution*/

/**
 *
 * Units, tens, and hundreds are place values in the decimal number system. The decimal system is a base-10 system,
 * which means that it uses 10 digits (0-9) to represent numbers. Each position in a decimal number represents a power of 10.
 * The rightmost digit in a decimal number is the units (or ones) digit. It represents the number of ones in the number.
 *  For example, in the number 1234, the units digit is 4.
 * The second digit from the right is the tens digit. It represents the number of tens in the number. For example, in the number 1234, the tens digit is
 * The third digit from the right is the hundreds digit.
 *  It represents the number of hundreds in the number. For example, in the number 1234, the hundreds digit is 2.
 * In general, each position in a decimal number represents a power of 10.
 *  The units position represents 10^0 (1), the tens position represents 10^1 (10), the hundreds position represents 10^2 (100), and so on.
 */

int main()
{
    int num;         // !---> 531
    int reversedNum; //?
    int unit, tens, hundred;
    printf("Enter a 3-digit numbers: ");
    scanf("%d", &num);
    unit = num % 10;        // ----> 1
    tens = (num / 10) % 10; // --->  3
    hundred = num / 100;    // ---> 5
    reversedNum = unit;
    reversedNum = reversedNum * 10 + tens;
    reversedNum = reversedNum * 10 + hundred;
    printf("The reversed number is: %d\n", reversedNum);
    return 0;
}

/* in my opinion the loop is better because what if the number was
199456... even more than that so the loop is easier but it up to you
 */