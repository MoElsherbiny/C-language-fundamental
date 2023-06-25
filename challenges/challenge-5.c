#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Write a Program that print a 1000 line of Not-yet concept
 */

/* The pseudoCode Technique
1. Declare a character array called message with size 100
2. Prompt the user to enter a message and read in the input using fgets()
3. Replace the trailing newline character in message with a null character ('\0')
4. For each value of i from 0 to 1000 do the following:
    a. Print the message to the screen followed by a newline character
5. Exit the program
*/

int main()
{
    char message[100];
    printf("What message do you want to print? ");
    fgets(message, 100, stdin);
    message[strcspn(message, "\n")] = '\0';
    for (int i = 0; i <= 1000; i++)
    {
        printf("%s\n", message);
    }
    return 0;
}

/*
fgets(message, 100, stdin);
message[strcspn(message, "\n")] = '\0';

The first line uses the `fgets()` function to read a line of text from the standard input stream (i.e., the keyboard) and store it in the character array `message`. The `fgets()` function takes three arguments:

- `message`: A pointer to a character array where the input should be stored.
- `100`: The maximum number of characters to read, including the null terminator. This means that `fgets()` will read at most 99 characters from the input stream, leaving room for the null terminator.
- `stdin`: A pointer to the standard input stream.

The second line uses the `strcspn()` function to find the index of the newline character (`'\n'`) in the `message` string and replace it with a null terminator (`'\0'`). The `strcspn()` function takes two arguments:

- `message`: A pointer to the string to search.
- `"\n"`: A string containing the characters to search for. In this case, we are searching for the newline character (`'\n'`).

The `strcspn()` function returns the length of the initial segment of the `message` string that does not contain any of the characters in `"\n"`. In other words, it returns the index of the first newline character in the string. We use this index to overwrite the newline character with a null terminator, effectively removing it from the string.

The reason we do this is that `fgets()` reads in the newline character along with the rest of the input when the user presses the Enter key. By removing the newline character from the string, we can ensure that the output of the program does not contain any unwanted newlines.
*/