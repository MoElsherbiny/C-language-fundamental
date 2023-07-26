#include <stdio.h>

int main()
{
    double number = 12.45;
    float number_1 = 12.9f;
    char character = 'z';
    char name;
    printf("The double number is %.2lf\n", number);
    printf("The float number is %.1f\n", number_1);
    printf("%c\n", character);
    printf("The size of char = %zu\n", sizeof(name));
    return 0;
}