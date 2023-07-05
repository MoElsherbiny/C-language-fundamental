# Functions in C Programming

Functions in C programming are a set of statements that are grouped together to perform a specific task. They are used to break down a large program into smaller, more manageable pieces. Functions are essential in C programming because they make the code more organized, modular, and reusable. 

A function in C programming can either be declared as `void` or with a return type. A function declared as `void` does not return any value, and it is used when the function does not need to return a value. In contrast, a function with a return type returns a value and is used when the function needs to return a value.

## Syntax of a Function

The syntax of a function in C programming is as follows:

```
return_type function_name(parameter_list) {
    // function body
}
```

- `return_type`: This is the data type of the value returned by the function.
- `function_name`: This is the name of the function.
- `parameter_list`: This is a list of parameters that the function accepts. It is optional, and if the function does not require any parameters, it can be left blank.
- `function body`: This is a set of statements that are executed when the function is called.

## Examples

### Example 1: Void Function

In this example, we will create a `printGreetings` function that does not return a value. The function will print a greeting message when called in the `main` function.

```c
#include <stdio.h>
#include <stdlib.h>

void printGreetings()
{
    printf("Here is First Function printGreetings\n");
    printf("Using Void is meaning that the function will not return any thing\n");
    printf("To Make the Function Work we need to Call it .. !\n");
}

int main()
{
    printf("Here We Call the Function\n");
    printGreetings();
    printf("Now The Function is Called successfully\n");
    return 0;
}
```

Output:
```
Here We Call the Function
Here is First Function printGreetings
Using Void is meaning that the function will not return any thing
To Make the Function Work we need to Call it .. !
Now The Function is Called successfully
```

### Example 2: Function with Parameters

In this example, we will create a `printMaxMin` function that accepts two parameters `num1` and `num2`. The function will compare the two numbers and print the maximum and minimum values.

```c
#include <stdio.h>
#include <stdlib.h>

void printMaxMin(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("number one is maximum as %d\n", num1);
        printf("number two is minumum as %d\n", num2);
    }
    else
    {
        printf("number one is maximum as %d\n", num2);
        printf("number two is minumum as %d\n", num1);
    }
}

int main()
{
    int a, b;
    printf("Enter the First number: ");
    scanf("%d", &a);
    printf("Enter The Second Number: ");
    scanf("%d", &b);
    printMaxMin(a, b);
    return 0;
}
```

Output:
```
Enter the First number: 5
Enter The Second Number: 3
number one is maximum as 5
number two is minumum as 3
```

### Example 3: Function with Return Type

In this example, we will create a `maxBetweenNumbers` function that does not accept any parameters. The function will prompt the user to enter three numbers and return the maximum value.

```c
#include <stdio.h>
#include <stdlib.h>

int maxBetweenNumbers()
{
    int num1, num2, num3;
    printf("Enter the Numbers you want to check-out which is maximum: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 > num2)
        if (num1 > num3)
            return num1;
        else
            return num3;
    else if (num2 > num3)
        return num2;
    else
        return num3;
}

int main()
{
    int max;
    max = maxBetweenNumbers();
    printf("The maximum Number is: %d\n", max);
    return 0;
}
```

Output:
```
Enter the Numbers you want to check-out which is maximum: 10 20 5
The maximum Number is: 20
```

### Example 4: Function with Return Type and Parameters

In this example, we will create a `findAverage` function that accepts three parameters `grade1`, `grade2`, and `grade3`. The function will calculate the average of the three grades and return the value.

```c
#include <stdio.h>
#include <stdlib.h>

float findAverage(int grade1, int grade2, int grade3)
{
    float average;
    average = (grade1 + grade2 + grade3) / 3.0;
    return average;
}

int main()
{
    int g1, g2, g3;
    printf("Hello Student please add Your Grades and Press Enter : ");
    scanf("%d%d%d", &g1, &g2, &g3);
    printf("Your Final Average is = %.1f\n", findAverage(g1, g2, g3));
    return 0;
}
```

Output:
```
Hello Student please add Your Grades and Press Enter : 80 90 95
Your Final Average is = 88.3
```

In conclusion, functions are an essential part of C programming as they help break down complex tasks into smaller, more manageable pieces. A function can either be declared as `void` or with a return type depending on whether it needs to return a value or not. By using functions, developers can make their code more organized, modular, and reusable.

 `fgets`, `stdin`, and `strlen` that you can use

- `fgets` is a function that reads a line from the specified stream and stores it into the string pointed to by str. It stops when either `(n-1)` characters are read, the newline character is read, or the end-of-file is reached, whichever comes first³.
- `stdin` is the standard input stream, which is used to read input from the keyboard or another input device.
- `strlen` is a function that computes the length of a string by determining the number of characters that precede the terminating null character⁴.

```markdown
- `fgets` is a function that reads a line from the specified stream and stores it into the string pointed to by str. It stops when either `(n-1)` characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.
- `stdin` is the standard input stream, which is used to read input from the keyboard or another input device.
- `strlen` is a function that computes the length of a string by determining the number of characters that precede the terminating null character.
```

(1) fgets() and gets() in C language - GeeksforGeeks. https://www.geeksforgeeks.org/fgets-gets-c-language/.
(2) FIO37-C. Do not assume that fgets() or fgetws() returns a nonempty .... https://wiki.sei.cmu.edu/confluence/display/c/FIO37-C.+Do+not+assume+that+fgets%28%29+or+fgetws%28%29+returns+a+nonempty+string+when+successful.
(3) string length with fgets function in C - Stack Overflow. https://stackoverflow.com/questions/41572713/string-length-with-fgets-function-in-c.
(4) c - How to read from stdin with fgets()? - Stack Overflow. https://stackoverflow.com/questions/3919009/how-to-read-from-stdin-with-fgets.
