#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int recursive(int x){
    if(x == 0 || x == 1){
        return x + 1;
    }
    else{
        return recursive(x - 1) + recursive(x / 2);
    }
}
int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", recursive(x));
    return 0;
}