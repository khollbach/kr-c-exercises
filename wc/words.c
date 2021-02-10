#include <stdio.h>
#include <stdbool.h>

bool is_sep(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int main() {
    int c, prev=' ';
    while (1) {
        c = getchar();
        if (!is_sep(prev) && (c == EOF || is_sep(c))) {
            // End of word.
            putchar('\n');
        }
        if (c == EOF) {
            break;
        }
        if (!is_sep(c)) {
            // Word character.
            putchar(c);
        }
        prev = c;
    }
}
