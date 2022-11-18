#include<stdio.h>
void reverse(char num[30]){
    char temp;
    int str_len, i;
    for(i = 0; ;i++){
        if(num[i] == '\0')
            break;
    }
    str_len = i;
    for(i = 0; i < str_len / 2; i++){
        temp = num[i];
        num[i] = num[str_len - 1 - i];
        num[str_len - 1 - i] = temp;
    }
}
void add(char a[30], char b[30], int c[30]){
    for(int i = 0; i < 30; i++){
        if(a[i] == '\0' || b[i] == '\0'){
            if(a[i] == '\0' && b[i] != '\0'){
                c[i] += (int)(b[i] - 48);
            }
            else if(a[i] != '\0' && b[i] == '\0'){
                c[i] += (int)(a[i] - 48);
            }
            else c[i] += 0;
        }
        else
            c[i] += (int)(a[i] - 48) + (int)(b[i] - 48);
        // carry
        if(c[i] >= 10){
            c[i] -= 10;
            c[i + 1]++;
        }
    }
    
}
int main(){
    int time;
    int len1 = 0, len2 = 0;
    char a[30], b[30];
    int c[30];
    
    scanf("%d", &time);
    while(time--){
        int skip = 0;
        for(int i = 0; i < 30; i++){
            a[i] = '0'; b[i] = '0'; c[i] = 0;
        }
        scanf("%s %s", a, b);
        //reverse the string
        reverse(a);
        reverse(b);    
        add(a, b, c);
        for(int i = 29; i >= 0; i--){
            if(skip == 0 && c[i] == 0)
                continue;
            skip = 1;
            printf("%d", c[i]);
        }
        printf("\n");
    }

    return 0;
}