#include <stdio.h>
#include <stdbool.h>

bool is_sep(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int main() {
    long lines = 0, words = 0, chars = 0;
    int c, prev=' ';
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            lines += 1;
        }
        if (is_sep(prev) && !is_sep(c)) {
            words += 1;
        }
        chars += 1;

        prev = c;
    }
    printf("%ld %ld %ld\n", lines, words, chars);
}
