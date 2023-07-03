#include <stdio.h>
#include <stdlib.h>

/**
 * Write a program that receives a "size" value from the user
 * the program should read a sequence of "size" numbers and check
 * if the numbers are "Very Ascending" or not
 */


int is_very_ascending(int numbers[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (numbers[i] <= total) {
            return 0;
        }
        total += numbers[i];
    }
    return 1;
}

int main() {
    int size;
    printf("Enter size of sequence: ");
    scanf("%d", &size);
    int numbers[size];
    for (int i = 0; i < size; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    if (is_very_ascending(numbers, size)) {
        printf("The sequence is Very Ascending\n");
    } else {
        printf("The sequence is not Ascending\n");
    }
    return 0;
}
