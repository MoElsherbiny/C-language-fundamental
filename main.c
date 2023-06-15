#include <stdio.h>

/*in this example i will make the user
 the one who add the number and to figure out
  the deference between scanf / printf */

int main()
{
    int num1; // developer input
    num1 = 20;
    printf("num1 is %d \n", num1);
    int num2; // user input so you should add the num in the terminal
    scanf("%d", &num2);
    printf("num2 is %d \n", num2);
    return 0;
}
