## C if Statement

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

## C for Loop

In programming, a loop is used to repeat a block of code until the specified condition is met. C programming has three types of loops: `for loop`, `while loop`, and `do...while loop`. In this tutorial, we will focus on the `for loop`.

The syntax of the `for loop` is:

```
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```

The `for loop` works as follows:

1. The `initializationStatement` is executed only once.
2. Then, the `testExpression` is evaluated. If the `testExpression` is evaluated to false, the `for loop` is terminated. However, if the `testExpression` is evaluated to true, statements inside the body of the `for loop` are executed, and the `updateStatement` is updated.
3. Again the `testExpression` is evaluated. This process goes on until the `testExpression` is false. When the `testExpression` is false, the loop terminates.

Here's an example of a `for loop` that prints numbers from 1 to 10:

```c
#include <stdio.h>

int main() {
  int i;

  for (i = 1; i < 11; ++i)
  {
    printf("%d ", i);
  }
  return 0;
}
```

Output: `1 2 3 4 5 6 7 8 9 10`

We can also use `for loop` to calculate the sum of the first n natural numbers. Here's an example program:

```c
#include <stdio.h>

int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

    return 0;
}
```

Output:

```
Enter a positive integer: 10
Sum = 55
```

In this program, the `for loop` terminates when `num` is less than `count`. The `for loop` keeps adding the value of `count` to the `sum` until the `count` reaches `num`. Then, the value of `sum` is printed on the screen.

By using `for loop`, we can repeat a block of code until the specified condition is met, which can make our code more efficient and robust.
