## How while loop works?
The while loop evaluates the testExpression inside the parentheses ().
If testExpression is true, statements inside the body of while loop are executed. Then, testExpression is evaluated again.
The process goes on until testExpression is evaluated to false.
If testExpression is false, the loop terminates (ends).


![alt text](images/c-while-loop_0.webp)


## What are do While loops

The do..while loop is similar to the while loop with one important difference. The body of do...while loop is executed at least once. Only then, the test expression is evaluated.

The syntax of the do...while loop is:
```
do {
  // the body of the loop
}
while (testExpression);


```
## How do...while loop works?
* The body of do...while loop is executed once. Only then, the  testExpression is evaluated.
* If testExpression is true, the body of the loop is executed again and testExpression is evaluated once more.
* This process goes on until testExpression becomes false.
If testExpression is false, the loop ends.
* other benefit for do ..while is prevent duplicates code 

![alt text](images/c-do-while-loop_0.webp)

* One of the benefits of using a `do...while` loop is that it can help prevent duplicate code in certain situations.


## Difference between `while` and `do...while` loops in C

The main difference between `while` and `do...while` loops in C is the order in which the loop condition is evaluated.

In a `while` loop, the condition is evaluated at the beginning of each iteration. If the condition is true, the loop body is executed; if it is false, the loop is exited:

```
while (condition) {
  // loop body
}
```

In a `do...while` loop, the condition is evaluated at the end of each iteration. This means that the loop body is always executed at least once, even if the condition is false:

```
do {
  // loop body
} while (condition);
```

So, the main difference is that a `do...while` loop will always execute its body at least once, while a `while` loop may not execute its body at all if the condition is false from the beginning.

Another difference is that the scope of any variables declared inside the loop body is different between the two loop types. In a `while` loop, the scope of the variables is limited to the loop body, while in a `do...while` loop, the scope of the variables extends beyond the loop body to the code that follows the loop.


## `for` Loops in C

A `for` loop is a control flow statement in C that allows you to execute a block of code repeatedly with a set number of iterations. The syntax of a `for` loop looks like this:

```
for (initialization; condition; increment/decrement) {
    // loop body
}
```

The `for` loop has three parts:

- **Initialization:** This is an expression that is executed once at the beginning of the loop. It is typically used to initialize a loop counter variable.
- **Condition:** This is an expression that is evaluated at the beginning of each iteration of the loop. If the condition is true, the loop body is executed; if it is false, the loop is exited.
- **Increment/decrement:** This is an expression that is executed at the end of each iteration of the loop. It is typically used to update the loop counter variable.

Here is an example of a `for` loop in action:

```
#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

In this example, the `for` loop initializes the variable `i` to 0, and then loops as long as `i` is less than 10. Inside the loop body, the value of `i` is printed using `printf()`. At the end of each iteration, the value of `i` is incremented by 1 using the `i++` expression.

The output of this program will be:

```
0
1
2
3
4
5
6
7
8
9
```

This is because the loop executes 10 times, with `i` starting at 0 and incrementing by 1 at the end of each iteration until it reaches 9.

Overall, `for` loops are a powerful tool in C for executing a block of code repeatedly with a set number of iterations.