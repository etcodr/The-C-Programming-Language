/* The C Programming Language by Brian W. Kernighan and Dennis M. Ritchie
 *
 * Exercise 1-14. Write a program to print a histogram of the frequencies of different
 * characters in its input.
 *
 * Solution by etdev
 *
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 128    // size of the alphabet

int main() {
    // initialize variables
    int c, state, iterator, count;
    int cc[SIZE] = {0};
    int freq[SIZE] = {0};

    iterator = 0;
    while ((c = getchar()) != '&') {
        if (iterator == SIZE) {
            printf("\n[!] Max number of characters reached!\n");
            break;
        }

        cc[iterator] = c;
        freq[iterator] = -1;
        iterator++;
    }
    
    printf("\n[!] Begin calculation...\n\n");

    // count the frequencies of the entered characters
    for (int i = 0; i < SIZE; i++) {
        count = 1;
        for (int j = i + 1; j < SIZE; j++) {
            if (cc[i] == cc[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }

    // print histogram
    for (int k = 0; k < SIZE; k++) {
        if (freq[k] > 0 && isprint(cc[k])) {
            printf("%c | ", cc[k]);
            for (int l = 0; l < freq[k]; l++)
                putchar('*');
            putchar('\n');
        }
    }

    printf("\nBye!\n");

    return 0;
}
