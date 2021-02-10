#include <stdio.h>

// Copy input to output, replacing tabs, backspaces and backslashes by escape
// sequences.
int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            // Two backslash characters.
            printf("\\\\");
        } else {
            putchar(c);
        }
    }
}
