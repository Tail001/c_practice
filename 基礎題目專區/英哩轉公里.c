#include<stdio.h>
#include<stdlib.h>
int main(){
    int input;
    float output, result;
    while(scanf("%d",&input) == 1 ){
        result = input * 1.6;
        output = (int)(result * 10 + 0.5) * 0.1;
        printf("%.1f\n", output);
    }
    return 0;
}
