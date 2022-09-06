#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int x_dir, y_dir;
    float distance;
    while(scanf("%d %d",&x_dir, &y_dir) == 2){
        if(x_dir < 0) x_dir *= -1;
        if(y_dir < 0) y_dir *= -1;
        distance = (x_dir * x_dir + y_dir * y_dir);
        if(distance <= 10000)
            printf("inside\n");
        else
            printf("outside\n");
    }
    return 0;
}