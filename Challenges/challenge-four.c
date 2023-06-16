#include <stdio.h>

/**
 * * write a Function that gets from user a temperature in c degree
 * the program should calculate and convert the temperature from  c to f degree
 * print it
 * ! here is a hint to convert temperature T(F) = T(C) * 1.8 + 32
 *
 * * write a Function that gets from user a temperature in f degree
 * the program should calculate and convert the temperature from  f to c degree
 * print it
 * ! here is a hint to convert temperature T(C) =(T(F)-32) / 1.8
 */

/**using pseudocode technique
 * FUNCTION celsiusToFahrenheit(celsius) 
 * fahrenheit = celsius * 1.8 + 32 
 * RETURN fahrenheit
 * END FUNCTION
 *  
 * FUNCTION fahrenheitToCelsius(fahrenheit)
 * celsius = (fahrenheit - 32) / 1.8
 * RETURN celsius
 * END FUNCTION
 * 
 * PRINT "Welcome to the temperature converter!"
 * PRINT "Enter 1 to convert Celsius to Fahrenheit, or 2 to convert Fahrenheit to Celsius:"
 * INPUT choice
 * IF choice = 1 
 * PRINT "Enter temperature in Celsius:"  
 * INPUT celsius
 * fahrenheit = CALL celsiusToFahrenheit(celsius)
 * PRINT celsius + "°C = " + fahrenheit + "°F"
 * ELSE IF choice = 2
 * PRINT "Enter temperature in Fahrenheit:"  
 * INPUT fahrenheit  
 * celsius = CALL fahrenheitToCelsius(fahrenheit)
 * PRINT fahrenheit + "°F = " + celsius + "°C"  
 * ELSE 
 * PRINT "Invalid choice!"
 * END IF
 * END
 */

#include <stdio.h>

double celsiusToFahrenheit(int celsius) {
    double fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

double FahrenheitToCelsius(int fahrenheit) {
    double celsius = (fahrenheit - 32) / 1.8;
    return celsius;
}

int main() {
    int choice;
    double celsius, fahrenheit;
    printf("Welcome to the temperature converter! Enter 1 to convert Celsius to Fahrenheit, or 2 to convert Fahrenheit to Celsius: ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Please enter the current temperature in Celsius degrees:");
        scanf("%lf", &celsius);
        fahrenheit = celsiusToFahrenheit(celsius);
        printf("%.1f°C=%.1f°F\n", celsius, fahrenheit);
    } else if (choice == 2) {
        printf("Please enter the current temperature in Fahrenheit degrees:");
        scanf("%lf", &fahrenheit);
        celsius = FahrenheitToCelsius(fahrenheit);
        printf("%.1f°F=%.1f°C\n", fahrenheit, celsius);
    } else {
        printf("Invalid Choice Please try again.");
    }

    return 0;
}