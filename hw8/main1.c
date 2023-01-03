#include<stdio.h>
int rows = 10;
void print_spaces(int r) {
    int i;
    for (i = (rows - r) * 2; i > 0; i -= 2) {
        printf("  ");
    }
}
void print_stars(int r) {
    int i;
    for (i = 1; i < (r * 2); i++) {
        printf("* ");
    }
}
int main() {
    for (int i = 1; i <= rows; i++) {
        print_spaces(i);
        print_stars(i);
        printf("\n");
    }
    return 0;
}