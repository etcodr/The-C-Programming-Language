#include <stdio.h>

/* The C Programming Language by Brian W. Kernighan and Dennis M. Ritchie
 * Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.
 * Solution by ET */

int main() {
    printf("+---------------------------------+\n");
    printf("| Celsius to Fahrenheit Converter |\n");
    printf("+---------------------------------+\n\n");

    double fahr, celsius;
    double lower, upper, step;

    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size

    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius*1.8) + 32.0;
        printf("[*] %3.0f %6.0f\n", celsius, fahr);
        celsius += step;
    }
}
