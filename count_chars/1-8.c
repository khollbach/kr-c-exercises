#include <stdio.h>

// Count spaces, tabs, and newlines.
int main() {
    long count = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            count += 1;
        }
    }
    printf("Spaces, tabs, or newlines: %ld\n", count);
}
