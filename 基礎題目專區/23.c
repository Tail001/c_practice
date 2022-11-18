#include<stdio.h>
int main(){
    int all;
    int a, b, c;
    //a = 15, b = 20, c = 30
    int d = 0, e = 0, f = 0;
    scanf("%d,%d,%d,%d", &all, &a, &b, &c);
    all = all - 15 * a - 20 * b - 30 * c;
    if(all < 0){
        printf("0\n");
        return 0;
    }
    while(all >= 0){
        if(all >=  50){
            f++;
            all -= 50;
            continue;
        }
        else if(all >= 5){
            e++;
            all -= 5;
            continue;
        }
        else if(all >= 1){
            d++;
            all -= 1;
            continue;
        }
        else
            break;
    }
    printf("%d,%d,%d\n", d, e, f);
    return 0;
}