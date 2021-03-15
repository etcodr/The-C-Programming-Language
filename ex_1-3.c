#include <stdio.h>

/* The C Programming Language by Brian W. Kernighan and Dennis M. Ritchie
 * Exercise 1-3. Modify the temperature conversion program to print a heading above the table
 * Solution by ET */

int main() {
    printf("+---------------------------------+\n");
    printf("| Fahrenheit to Celsius Converter |\n");
    printf("+---------------------------------+\n\n");

    double fahr, celsius;
    double lower, upper, step;

    lower = 0;      // lower limit of temperature scale
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("[*] %3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}
