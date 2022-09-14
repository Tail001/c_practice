#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int x, y, temp;
    while(scanf("%d %d", &x, &y) == 2){
        while(y != 0){
            temp = y;    // We will switch values between two varable 
            y = x % y;  // So let:
            x = temp;   // x is always dividend
        }               // y is always divisor
        printf("%d\n", x);
    }
    return 0;
}