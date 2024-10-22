#include<stdio.h>

int main(){
    float x, y;
    float x1 = 2, y1 = 2, x2 = -2, y2 = 2, x3 = -2, y3 = -2, x4 = 2, y4 = -2;
    float r = 1;
    float h = 0;
    
    if((x - x1) * (x - x1) + (y - y1) * (y - y1) <= r * r){
        h = 10;
    }else{
        h = 0;
}
printf("h = %.2f\n m", h);
}