#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum = 0, hour, last;
    int begin_hour, end_hour, begin_min, end_min;
    while(scanf("%d %d %d %d", &begin_hour, &begin_min, &end_hour, &end_min) == 4){
        if(begin_min > end_min){ // over a hour
            end_hour--;
            last = end_min + 60 - begin_min;
            hour = end_hour - begin_hour;
        }
        else{
            hour = end_hour - begin_hour;
            last = end_min - begin_min;
        }
        if(hour >= 4){
            if(last >= 30) sum += 60; // tackle with less than four hour
        }
        else if(hour < 4 && hour >= 2){
            if(last >= 30) sum += 40;
        }
        else{
            if(last >= 30) sum += 30;
        }
        while(hour > 0){
            if(hour > 4){
                sum += (hour - 4) * 120;
                hour = 4;
            }
            else if(hour <= 4 && hour > 2){
                sum += (hour - 2) * 80;
                hour = 2;
            }
            else if(hour <= 2){
                hour--;
                sum += 60;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}