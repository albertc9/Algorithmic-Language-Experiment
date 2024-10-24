#include<stdio.h>

int fibonacci(int f){
    if (f <= 0) return 0;
    if (f == 1) return 1;
    return fibonacci(f - 1) + fibonacci(f - 2);
}

int main(){
    float sum = 0, temSum = 0;
    for (int i = 1; i <= 20; i++){
        temSum = fibonacci(i + 2) / fibonacci(i + 1);
        sum += temSum;
    }
    printf("结果是：%f\n", sum);

}