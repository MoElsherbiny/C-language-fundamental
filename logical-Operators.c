#include <stdio.h>
#include <stdlib.h>

int main() {
    int gradeOne;
    int gradeTwo;
    printf("Enter your grades in C-test and JavaScript-test: \n");
    scanf("%d%d", &gradeOne, &gradeTwo);
    if (gradeOne < 50 && gradeTwo > 70) {
        printf("Sorry, you didn't pass the C-test but you succeeded in the JavaScript-test.\n");
    } else if (gradeOne > 50 || gradeTwo > 70) {
        printf("Congratulations, you succeeded in both the C-test and the JavaScript-test!\n");
    } else if (!(gradeOne > 50)) {
        printf("Great job, you passed the C-test!\n");
    }
    return 0;
}
