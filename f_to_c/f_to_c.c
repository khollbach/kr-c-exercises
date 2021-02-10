#include <stdio.h>

float f_to_c(float f) {
    return 5. / 9. * (f - 32.);
}

float c_to_f(float c) {
    return c * 9. / 5. + 32.;
}

void print_ftoc_table() {
    printf("  F    C\n");
    printf("----------\n");
    for (float f = 300; f >= 0; f -= 20) {
        printf("%3.f %6.1f\n", f, f_to_c(f));
    }
}

void print_ctof_table() {
    printf("   C    F\n");
    printf("-----------\n");
    for (float c = -100; c <= 200; c += 20) {
        printf("%4.f %6.1f\n", c, c_to_f(c));
    }
}

int main() {
    print_ftoc_table();
    printf("\n");
    print_ctof_table();
}
