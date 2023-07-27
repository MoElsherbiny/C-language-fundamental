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

## C while and do...while Loop

In programming, loops are used to repeat a block of code until a specified condition is met. C programming has three types of loops: `for loop`, `while loop`, and `do...while loop`. In this tutorial, we will focus on the `while loop` and `do...while loop`.

### while loop

The syntax of the `while loop` is:

```
while (testExpression) {
  // the body of the loop
}
```

The `while loop` works as follows:

1. The `while loop` evaluates the `testExpression` inside the parentheses ().
2. If `testExpression` is true, statements inside the body of `while` loop are executed. Then, `testExpression` is evaluated again.
3. The process goes on until `testExpression` is evaluated to false.
4. If `testExpression` is false, the loop terminates (ends).

Here's an example of a `while loop` that prints numbers from 1 to 5:

```c
#include <stdio.h>

int main() {
  int i = 1;
    
  while (i <= 5) {
    printf("%d\n", i);
    ++i;
  }

  return 0;
}
```

Output:

```
1
2
3
4
5
```

We have initialized `i` to 1. When `i = 1`, the `testExpression` `i <= 5` is true. Hence, the body of the `while loop` is executed. This prints 1 on the screen, and the value of `i` is increased to 2. The `testExpression` is evaluated again, and this process goes on until `i` becomes 6. Then, the `testExpression` `i <= 5` will be false, and the loop terminates.

### do...while loop

The `do...while loop` is similar to the `while loop` with one important difference. The body of `do...while loop` is executed at least once. Only then, the `testExpression` is evaluated.

The syntax of the `do...while loop` is:

```
do {
  // the body of the loop
} while (testExpression);
```

The `do...while loop` works as follows:

1. The body of `do...while loop` is executed once. Only then, the `testExpression` is evaluated.
2. If `testExpression` is true, the body of the loop is executed again, and `testExpression` is evaluated once more.
3. This process goes on until `testExpression` becomes false.
4. If `testExpression` is false, the loop ends.

Here's an example program that uses a `do...while loop` to add numbers until the user enters zero:

```c
#include <stdio.h>

int main() {
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  } while (number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}
```

Output:

```
Enter a number: 1.5
Enter a number: 2.4
Enter a number: -3.4
Enter a number: 4.2
Enter a number: 0
Sum = 4.70
```

In this example, we have used a `do...while loop` to prompt the user to enter a number. The loop works as long as the input number is not 0. The `do...while loop` executes at least once, i.e., the first iteration runs without checking the condition. The condition is checked only after the first iteration has been executed.

So, if the first input is a non-zero number, that number is added to the `sum` variable, and the loop continues to the next iteration. This process is repeated until the user enters 0. But if the first input is 0, there will be no second iteration of the loop, and `sum` becomes 0.0. Finally, outside the loop, we print the value of `sum`.

By using `while loop` and `do...while loop`, we can repeat a block of code until the specified condition is met, which can make our code more efficient and robust.
