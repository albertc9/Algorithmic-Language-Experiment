#include<stdio.h>

int main(){
    double h = 100;
    double sum = 0;

    for (int i = 1; i <= 10; i++){
        sum = sum + h + h / 2;
        h = h / 2;
    }
    printf("第十次落地时共经过%f米\n", sum);
    printf("第十次反弹%f米\n", h);
}