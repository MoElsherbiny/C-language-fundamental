# Variables
* In C programming language, a variable is a named location in memory that holds a value of a specific type, such as integer, floating-point number, character, or pointer.

* Variables in C have the following characteristics:

- A variable needs to be declared before it can be used. The declaration specifies the name of the variable, its data type, and optionally an initial value.
- Variables are case-sensitive, which means that "count" and "Count" are two different variables.
- The scope of a variable determines where it can be accessed in the program. A variable can be declared at the global level, which means it is accessible from any part of the program, or at the local level, which means it is only accessible within the block of code where it is declared.
- The lifetime of a variable determines how long it exists in memory. A variable can have static or automatic storage duration. Static variables exist throughout the entire program, while automatic variables are created and destroyed each time the block of code where they are declared is executed.

Here is an example of declaring and initializing variables in C:

```c
int age = 28;           // declare and initialize an integer variable called age
float weight = 65.5;    // declare and initialize a floating-point variable called weight
char grade = 'A';       // declare and initialize a character variable called grade
```

In this example, we declare and initialize three variables: an integer variable called "age" with a value of 28, a floating-point variable called "weight" with a value of 65.5, and a character variable called "grade" with a value of 'A'.


 # "double"
 *  is a data type used to represent floating-point numbers with double precision. It is also referred to as a "double-precision floating-point type".

 * The "double" data type is used when higher precision is needed than that provided by the "float" data type. It occupies 8 bytes (64 bits) of memory and can represent a wider range of values than "float", with a higher degree of accuracy.

- Here is an example of declaring and initializing a "double" variable in C:
```c
double pi = 3.1415926535897932384
``` 
* In this example, we declare and initialize a "double" variable called "pi" with the value of the mathematical constant pi, which requires high precision to represent accurately.



## Explanation of scanf() function in C

In the line of code `scanf("%d", &num);`, the `scanf()` function reads input from the standard input stream (usually the keyboard) and stores it in the integer variable `num`.

The `%d` format specifier in the `scanf()` function indicates that the input should be interpreted as an integer value. This means that `scanf()` will read a sequence of digits (0-9) from the input stream until it encounters a non-digit character, such as a space, newline, or non-numeric character, and then it will convert the sequence of digits into an integer value.

The `&num` argument in the `scanf()` function is the memory address of the variable `num`, which tells `scanf()` where to store the integer value read from the input stream. The `&` operator in C is the address-of operator, which returns the memory address of a variable.

So, when the `scanf()` function is executed, it waits for the user to enter an integer value from the keyboard. Once the user enters the value and presses the Enter key, `scanf()` reads the input value, converts it to an integer, and stores it in the memory location pointed to by the address of the variable `num`. After the input is read and stored, the program continues with the next line of code.