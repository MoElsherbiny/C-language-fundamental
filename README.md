##  C if Statement
* The syntax of the if statement in C programming is:

* if (test expression) 
{
   // code
}
* How if statement works?
The if statement evaluates the test expression inside the parenthesis ().

* If the test expression is evaluated to true, statements inside the body of if are executed.
* If the test expression is evaluated to false, statements inside the body of if are not executed.
 

 ![Alt text](/images/image.png)


**Program to display a number if it is negative**


```
#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");`
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }

    printf("The if statement is easy.");

    return 0;
}
```

```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Enter the two numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("max= %d\n", num1);
    }
    else
    {
        printf("max= %d\n", num2);
        return 0;
    }
}
```
## Relational Operator 

* A relational operator checks the relationship between two operands. If the relation is true, it returns 1; if the relation is false, it returns value 0.

* Relational operators are used in decision making and loops.
  
   ![Alt text](/images/image2.png)


## Quadrant 
* A quadrant is one of the four regions of the Cartesian coordinate system, which is used to locate points in a two-dimensional plane. The quadrants are numbered counterclockwise starting from the upper right-hand corner, with Quadrant I being the region where both coordinates are positive, Quadrant II being the region where the x-coordinate is negative and the y-coordinate is positive, Quadrant III being the region where both coordinates are negative, and Quadrant IV being the region where the x-coordinate is positive and the y-coordinate is negative. The center of the coordinate system, where both coordinates are 0, is called the origin.

   ![Alt text](/images/quadrant-example.jpg)