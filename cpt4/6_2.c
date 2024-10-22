#include <stdio.h>

int main(){
    float x, y;
    int range;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    if (x < 1){
        range = 0;
    }else if(x >= 1 && x < 10){
        range = 1;
    }else{
        range = 2;
    }

    switch(range){
        case 0:
            y = x;
            break;
        case 1:
            y = 2 * x - 1;
            break;
        case 2:
            y = 3 * x - 11;
            break;
    }

    printf("y = %.2f\n", y);
    return 0;
}