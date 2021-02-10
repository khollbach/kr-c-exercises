#include <stdio.h>

void main_1() {
    int c;
    long count = 0;
    while ((c = getchar()) != EOF) {
        count += 1;
    }
    printf("Total characters: %ld\n", count);
}

int main() {
    long count = 0;
    int c;
    int last;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            count += 1;
        }
        last = c;
    }
    if (last != '\n') {
        count += 1;
    }
    printf("Lines: %ld\n", count);
}
