# Format Specification

In C programming language, format specifiers are used with functions like printf() and scanf() to specify the type and format of data that is being input or output.

The following are some commonly used format specifiers in C:

- %d: for integer data type
- %f: for floating point data type
- %c: for character data type
- %s: for string data type
- %u: for unsigned integer data type
- %x or %X: for hexadecimal data type
- %p: for pointer data type
- %%: to print a percent sign

For example, to print an integer variable "age" using printf(), we can use the format specifier "%d" as follows:

```c
int age = 28;
printf("My age is: %d\n", age);
```
This will print the message "My age is: 28" to the console.

Similarly, to print a floating point variable "num" with one decimal point using printf(), we can use the format specifier "%.1f" as follows:

```c
float num = 93.7;
printf("The number is: %.1f\n", num);
```
This will print the message "The number is: 93.7" to the console.

Note that if we use the format specifier "%f" without specifying the number of decimal points, we may get extra decimal places that we don't want. By using the "%.1f" format specifier, we can limit the output to one decimal point.