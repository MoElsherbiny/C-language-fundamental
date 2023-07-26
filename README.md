## Description of all Keywords in C

C is a case-sensitive programming language that has a set of reserved keywords. The keywords are predefined and cannot be used as variable names or any other identifiers in the program. Here is a list of all the keywords allowed in ANSI C:

```
auto     break    case     char     const    continue
default  do       double   else     enum     extern
float    for      goto     if       int      long
register return   short    signed   sizeof   static
struct   switch   typedef  union    unsigned void
volatile while
```

## C Identifiers

An identifier refers to the name given to entities such as variables, functions, structures, etc. in a program. Identifiers must be unique and are created to give a unique name to an entity to identify it during the execution of the program. For example:

```c
int money;
double accountBalance;
```

Here, `money` and `accountBalance` are identifiers.

It is important to note that identifier names must be different from keywords. You cannot use `int` as an identifier because `int` is a keyword.

## Rules for naming identifiers

Here are some rules for naming identifiers in C:

- A valid identifier can have letters (both uppercase and lowercase letters), digits, and underscores.
- The first letter of an identifier should be either a letter or an underscore.
- You cannot use keywords like `int`, `while`, etc. as identifiers.
- There is no rule on how long an identifier can be. However, you may run into problems in some compilers if the identifier is longer than 31 characters.
- You can choose any name as an identifier if you follow the above rule, however, give meaningful names to identifiers that make sense.


## Escape Sequences

Sometimes, it is necessary to use characters that cannot be typed or have special meaning in C programming. In order to use these characters, escape sequences are used.

The following table shows the escape sequences available in C programming:

Escape Sequence | Character
--- | ---
`\b` | Backspace
`\f` | Form feed
`\n` | Newline
`\r` | Return
`\t` | Horizontal tab
`\v` | Vertical tab
`\\` | Backslash
`\'` | Single quotation mark
`\"` | Double quotation mark
`\?` | Question mark
`\0` | Null character

The null character (`\0`) is used to terminate strings in C programming. It has a value of zero and is represented as a null byte.


## C Data Types

In C programming, data types are declarations for variables. This determines the type and size of data associated with variables. For example,

```c
int myVar;
```

Here, `myVar` is a variable of `int` (integer) type. The size of `int` is 4 bytes.

Here's a table containing commonly used types in C programming for quick access:

Type | Size (bytes) | Format Specifier
--- | --- | ---
`int` | at least 2, usually 4 | `%d`, `%i`
`char` | 1 | `%c`
`float` | 4 | `%f`
`double` | 8 | `%lf`
`short int` | 2 usually | `%hd`
`unsigned int` | at least 2, usually 4 | `%u`
`long int` | at least 4, usually 8 | `%ld`, `%li`
`long long int` | at least 8 | `%lld`, `%lli`
`unsigned long int` | at least 4 | `%lu`
`unsigned long long int` | at least 8 | `%llu`
`signed char` | 1 | `%c`
`unsigned char` | 1 | `%c`
`long double` | at least 10, usually 12 or 16 | `%Lf`

These are the basic data types available in C programming. The size of each data type may vary depending on the compiler and the system being used.


## C Data Types

In C programming, data types are declarations for variables. This determines the type and size of data associated with variables. For example:

```c
int myVar;
```

Here, `myVar` is a variable of `int` (integer) type. The size of `int` is 4 bytes.

### Basic Types

Here's a table containing commonly used types in C programming for quick access:

Type | Size (bytes) | Format Specifier
--- | --- | ---
`int` | at least 2, usually 4 | `%d`, `%i`
`char` | 1 | `%c`
`float` | 4 | `%f`
`double` | 8 | `%lf`
`short int` | 2 usually | `%hd`
`unsigned int` | at least 2, usually 4 | `%u`
`long int` | at least 4, usually 8 | `%ld`, `%li`
`long long int` | at least 8 | `%lld`, `%lli`
`unsigned long int` | at least 4 | `%lu`
`unsigned long long int` | at least 8 | `%llu`
`signed char` | 1 | `%c`
`unsigned char` | 1 | `%c`
`long double` | at least 10, usually 12 or 16 | `%Lf`

These are the basic data types available in C programming. The size of each data type may vary depending on the compiler and the system being used.

#### `int`

`int` is used to store integer values. It can have both positive and negative values, but it cannot store decimal values. The size of `int` is usually 4 bytes (32 bits), and it can take 2^32 distinct states from -2147483648 to 2147483647.

```c
int myInt = 42;
```

Here, `myInt` is a variable of type `int`.

#### `float` and `double`

`float` and `double` are used to store real numbers. `float` is a single-precision floating-point data type, while `double` is a double-precision floating-point data type. The size of `float` is 4 bytes (32 bits), while the size of `double` is 8 bytes (64 bits).

```c
float myFloat = 3.14;
double myDouble = 3.14159;
```

In C, floating-point numbers can also be represented in exponential notation using the `e` notation. For example:

```c
float normalizationFactor = 22.442e2;
```

#### `char`

`char` is used to store character values. It can store a single character, such as a letter, digit, or punctuation mark. The size of a `char` variable is 1 byte.

```c
char myChar = 'a';
```

Here, `myChar` is a variable of type `char`.

#### `void`

`void` is an incomplete type, which means "nothing" or "no type". You can think of `void` as absent. It is often used as the return type for functions that do not return a value.

```c
void myFunction() {
  // do something here
}
```

Note that you cannot create variables of `void` type.

#### `short` and `long`

If you need to use a larger integer, you can use a type specifier `long`. Here's how:

```c
long a;
long long b;
```

Here, variables `a` and `b` can store integer values. If you are sure that only a small integer ([−32,767, +32,767] range) will be used, you can use `short`.

```c
short d;
```

You can always check the size of a variable using the `sizeof()` operator.

```c
#include <stdio.h>

int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double = %d bytes\n", sizeof(d));

  return 0;
}
```

#### `signed` and `unsigned`

In C, `signed` and `unsigned` are type modifiers that can alter the data storage of a data type:

- `signed` allows for storage of both positive and negative numbers.
- `unsigned` allows for storage of only positive numbers.

```c
unsigned int x = 35;
int y = -35;  // signed int
```

Here, the variables `x` and `y` can hold integer values, but `x` can only hold non-negative values, while `y` can hold both negative and positive values.
