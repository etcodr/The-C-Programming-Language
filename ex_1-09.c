/* The C Programming Language by Brian W. Kernighan and Dennis M. Ritchie
 * Exercise 1-9. Write a program to copy its input to its output, replacing each string
 * of one or more blanks by a single blank.
 * Solution by ET */

#include <stdio.h>

#define STABLE EOF

int main() {
    // declare variables to store new input and record previous input.
    int c, prev;

    // initialize prev to the constant STABLE, which is EOF.
    prev = STABLE;
    while ((c = getchar()) != EOF) {
        // handle all cases where c is not a blank.
        if (c != ' ') {
            putchar(c);
        }
        // c is a blank, but prev is not, we can go ahead and print it, otherwise no.
        if (c == ' ') {
            if (prev != ' ') {
                putchar(c);
            }
        }
        // crucially set prev equal to c at the end of the loop.
        prev = c;
    }
    return 0;
}
