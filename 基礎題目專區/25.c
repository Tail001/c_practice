#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    char string[100];
    scanf("%d\n", &n);
    while(n--){
        scanf("%[^\n]", string);
        printf("%s", string);
        for(int i = 0;i < 100; i++){
            string[i] = 0;
        }
    }
    
    return 0;
}