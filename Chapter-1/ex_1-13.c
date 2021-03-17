/* The C Programming Language by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Exercise 1-13. Write a program to print a histogram of the lengths of words
 * in its input. It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 *
 * Solution by ET*/

#include <stdio.h>

#define IN 1        // inside a word
#define OUT 0       // outside a word
#define MAX 12

int main() {
    int c, state, nc, counter;
    int wl[MAX] = {0};

    nc = 0;
    counter = 0;
    state = OUT;
    while ((c = getchar()) != 'EOF') {
        if (counter == MAX)
            break;
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (nc > 0)
                wl[counter] = nc;
            nc = 0;
            counter++;
        }
        else if (state == OUT) {
            state = IN;
            nc++;
        }
        else
            nc++;
    }
    for (int i = 0; i < MAX; i++) {
        if (wl[i] > 0) {
            printf("%i ", wl[i]);
            for (int j = 0; j < wl[i]; j++)
                printf("*");
            printf("\n");
        }
    }
}
