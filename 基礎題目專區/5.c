#include<stdio.h>
#include<stdlib.h>
int main(){
    int input;
    while(scanf("%d", &input) == 1){
        int res[8] = {0}; // int array, don't need to store /0
        if(input < 0) input += 256; // 2 ^ 8 = 256
        for(int i = 0; i < 8; i ++){
            res[7 - i] = input % 2;
            input /= 2;
        }
        for(int i = 0; i < 8; i++)
            printf("%d", res[i]);
        printf("\n");
    }
    return 0;
}
