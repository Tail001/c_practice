#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int num;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){
        char suit;
        int card_num;
        while(true){
            scanf(" %c %d", &suit, &card_num);
            if(getchar() == '\n'){
                break;
            }
            printf("%c %d\n",suit, card_num);
        }
    }
    return 0;
}