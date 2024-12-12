// 求方程ax^2+bx+c=0的根，用三个函数分别求当：b^2-4ac>0, b^2-4ac=0, b^2-4ac<0时的根并输出结果。从主函数输入a,b,c的值。

#include <stdio.h>
#include <math.h>

void positive(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("两个不同的实根: %.2f 和 %.2f\n", root1, root2);
}

void zero(double a, double b, double c) {
    double root = -b / (2 * a);
    printf("一个实根: %.2f\n", root);
}

void negative(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    double realPart = -b / (2 * a);
    double imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("两个虚根: %.2f + %.2fi 和 %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
}

int main() {
    double a, b, c;
    printf("请输入a, b, c的值: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        positive(a, b, c);
    } else if (discriminant == 0) {
        zero(a, b, c);
    } else {
        negative(a, b, c);
    }

    return 0;
}

