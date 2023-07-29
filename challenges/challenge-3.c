#include <stdio.h>
#include <stdlib.h>
/**
 * write a program that checks the grade for a student 
*/

int main () {
	int grade;
printf("Enter your grade: ");
scanf("%d",&grade);
if(grade >= 80){
printf("Excllent Job!\n");
}else if (grade >= 60){
printf("Not bad you should work harder to get more grades\n");
}else {
printf("Oh ... you didn't pass");
}
}
