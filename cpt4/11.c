#include <stdio.h>

void sort(int *a, int *b, int *c, int *d) {
    int temp;
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*c > *d) { temp = *c; *c = *d; *d = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }
    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
}

int main() {
    int a, b, c, d;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    sort(&a, &b, &c, &d);

    printf("The numbers in ascending order are: %d %d %d %d\n", a, b, c, d);
    return 0;
}