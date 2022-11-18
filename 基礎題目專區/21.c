#include<stdio.h>
int main(){
    float max = 0, min = 999999;
    float temp;
    for(int i = 0; i < 10; i++){
        scanf("%f", &temp);
        if(temp > max)
            max = temp;
        if(min > temp)
            min = temp;
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
    return 0;
}