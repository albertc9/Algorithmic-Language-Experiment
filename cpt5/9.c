#include<stdio.h>

int sum_of_factors(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    return sum;
}

void print_factors(int n) {
    int first = 1;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            if (!first) {
                printf(",");
            }
            printf("%d", i);
            first = 0;
        }
    }
}

int main(){
    for (int i = 1; i <= 1000; i++){
        if (i == sum_of_factors(i)){
            printf("%d its factors are ", i);
            print_factors(i);
            printf("\n");
        }
    }
}  