#include <stdio.h>
#include <stdlib.h>

/**
 * write a program that checks if 2 passwords received from the user
 * are the same
 *
 */
int main()
{

    int num1, num2;
    printf("Can you add you password: ");
    scanf("%d", &num1);
    printf("Can you retype your password: ");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("The two passwords are identical\n");
    }
    else if (num1 != num2)
    {
        printf("sorry the password you added is not the same as the other try again\n");
    }
}