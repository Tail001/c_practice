#include<stdio.h>
int main(){
    int all;
    int a, b, c;
    //a = 15, b = 20, c = 30
    int d, e, f;
    scanf("%d,%d,%d,%d", &all, &a, &b, &c);
    all = all - 15 * a - 20 * b - 30 * c;
    while(all >= 0){
        if(all >=  50){
            f++;