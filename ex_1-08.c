#include <stdio.h>

/* The C Programming Language by Brian W. Kernighan and Dennis M. Ritchie
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 * Solution by ET */

int main() {
    int c, blanks, tabs, newlines;

    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\0') {
            ++blanks;
        }
        if (c == '\t') {
            ++tabs;
        }
        if (c == '\n') {
            ++newlines;
        }
    }
    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
}
