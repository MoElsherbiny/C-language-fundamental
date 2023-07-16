# Pointers in C

A pointer in C is a variable that stores the address of another variable. This allows us to access and manipulate the data stored in that memory location using the pointer. Pointers are one of the powerful features of C programming, as they enable low-level memory access, dynamic memory allocation, and function pointers.

## Pointer Declaration

To declare a pointer, we use the `*` operator before the name of the pointer. For example:

```c
int *p; // p is a pointer to int
char *q; // q is a pointer to char
```

The type of the pointer indicates the type of data that the pointer can point to. The size of the pointer depends on the system architecture, not on the type of data.

## Pointer Initialization

To initialize a pointer, we assign it the address of another variable using the `&` operator. For example:

```c
int x = 10;
int *p;
p = &x; // p points to x
```

We can also declare and initialize a pointer in one statement. For example:

```c
int x = 10;
int *p = &x; // p points to x
```

It is recommended to always initialize a pointer before using it, otherwise it may point to some random memory location and cause errors.

## Pointer Dereferencing

To access the value stored in the memory location pointed by the pointer, we use the `*` operator again. This is called dereferencing the pointer. For example:

```c
int x = 10;
int *p = &x;
printf("%d\n", *p); // prints 10
*p = 20; // changes x to 20
printf("%d\n", x); // prints 20
```

The `*` operator can also be used to perform arithmetic operations on the value pointed by the pointer. For example:

```c
int x = 10;
int *p = &x;
(*p)++; // increments x by 1
printf("%d\n", x); // prints 11
```

Note: The parentheses around `*p` are necessary, otherwise the compiler will interpret it as `*(p++)`, which means incrementing the pointer itself, not the value.

## References

- [C Pointers (With Examples) - Programiz](https://www.programiz.com/c-programming/c-pointers)
- [C Pointers - GeeksforGeeks](https://www.geeksforgeeks.org/c-pointers/)
- [Pointers in C | Studytonight](https://www.studytonight.com/c/pointers-in-c.php)
- [C Pointers - javatpoint](https://www.javatpoint.com/c-pointers)
