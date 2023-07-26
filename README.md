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