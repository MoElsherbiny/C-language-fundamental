Here is the markdown:

## Variables
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

## "double" data type
*  The "double" data type is used when higher precision is needed than that provided by the "float" data type. It occupies 8 bytes (64 bits) of memory and can represent a wider range of values than "float", with a higher degree of accuracy.

- Here is an example of declaring and initializing a "double" variable in C:
```c 
double pi = 3.1415926535897932384 
```
* In this example, we declare and initialize a "double" variable called "pi" with the value of the mathematical constant pi, which requires high precision to represent accurately.

## Explanation of scanf() function
In the line of code `scanf("%d", &num);`, the `scanf()` function reads input from the standard input stream (usually the keyboard) and stores it in the integer variable `num`.  

The `%d` format specifier in the `scanf()` function indicates that the input should be interpreted as an integer value. This means that `scanf()` will read a sequence of digits (0-9) from the input stream until it encounters a non-digit character, such as a space, newline, or non-numeric character, and then it will convert the sequence of digits into an integer value.  

The `&num` argument in the `scanf()` function is the memory address of the variable `num`, which tells `scanf()` where to store the integer value read from the input stream. The `&` operator in C is the address-of operator, which returns the memory address of a variable.  

So, when the `scanf()` function is executed, it waits for the user to enter an integer value from the keyboard. Once the user enters the value and presses the Enter key, `scanf()` reads the input value, converts it to an integer, and stores it in the memory location pointed to by the address of the variable `num`. After the input is read and stored, the program continues with the next line of code.

## Casting
The main difference between implicit and explicit casting in C programming language is how the conversion is performed.  

Implicit casting is performed automatically by the compiler when it is safe to do so. For example, when you assign a value of a smaller data type to a variable of a larger data type, the compiler will automatically convert the value to the larger data type. This type of casting is also known as "type promotion". Implicit casting is convenient and can help simplify code, but it can also lead to unexpected results if not used carefully.  

Explicit casting, on the other hand, is performed by the programmer using the casting operator. The casting operator is a unary operator that takes the form of `(type) expression`. The expression is converted to the specified data type indicated by the `(type)`. Explicit casting is useful when you want to convert a value from one data type to another, but the compiler cannot perform the conversion implicitly. Explicit casting gives the programmer more control over the conversion process and can help prevent unexpected results.

Here's an example to illustrate the difference between implicit and explicit casting:

```c
int i = 2;  
float f = i;          // implicit casting from int to float  
double d = (double) i; // explicit casting from int to double
```  

In this example, we declare an integer variable `i` and assign it the value `2`. We then assign the value of `i` to a float variable `f` without using explicit casting. This is an example of implicit casting, as the compiler automatically converts the value of `i` to a float value.  

We then use explicit casting to convert the value of `i` to a double precision floating-point value and assign it to the double variable `d`. The `(double)` operator tells the compiler to convert the value of `i` to a double precision floating-point value.  

In summary, implicit casting is performed automatically by the compiler when it is safe to do so, while explicit casting is performed by the programmer using the casting operator to convert a value from one data type to another. Explicit casting provides more control over the conversion process and can help prevent unexpected results.