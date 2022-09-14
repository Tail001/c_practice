#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int x;
    while(scanf("%d", &x) == 1){
        bool prime = true;
        if(x >= 0 && x < 2 ){
            printf("NO\n");
        }
        else{
            for(int i = 2; i < x; i++){
                if(x % i == 0){
                    prime = false;
                    break;
                }
            }
            if(prime) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}