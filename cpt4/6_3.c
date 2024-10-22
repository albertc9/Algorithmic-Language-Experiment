#include <stdio.h>

int main(){
    float x, y;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    y = (x < 1) ? (x) : (x < 10) ? (3 * x -11) : (3 * x - 11);

    printf("y = %.2f\n", y);
    return 0;
}