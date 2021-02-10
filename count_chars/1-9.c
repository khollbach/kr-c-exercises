#include <stdio.h>

// Copy input to output, replacing multi-' ' (space) by one ' ' (space).
int main() {
    int prev = EOF;
    int c;
    while (1) {
        c = getchar();
        if (c != ' ') {
            // Print a single space *after* seeing a group of one or more
            // spaces.
            if (prev == ' ') {
                putchar(' ');
            }
            if (c == EOF) {
                break;
            }
            putchar(c);
        }
        prev = c;
    }
}
