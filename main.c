#include <stdio.h>

int main()
{
    int grade1 = 80;
    int grade2 = 100;
    printf("Grade1 Value = %d\n", grade1);
    printf("Grade1 Address = %p\n", &grade1);
    printf("Grade1 Value = %d\n", grade2);
    printf("Grade1 Address = %p\n", &grade2);
    return 0;
}