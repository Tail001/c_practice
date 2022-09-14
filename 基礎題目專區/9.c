#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int x;
    while(scanf("%d", &x) == 1){
        int sum = 0;
        for(int i = 1; i <= x; i++){
            if(i % 3 == 0){
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}