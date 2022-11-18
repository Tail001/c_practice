#include<stdio.h>
#include<stdlib.h>
int main(){
    char string[101];
    int alpha[26] = {0};
    gets(string);
    int word_num = 0, count = 0;
    while(string[count] != '\0'){ // '\0'means the end of the string
        if(string[count] == ' '){
            word_num += 1; // count space
        }
        else if(string[count] >= 'a' && string[count] <= 'z'){
            alpha[string[count] - 'a'] += 1;
        }
        else if(string[count] >= 'A' && string[count] <= 'Z'){
            alpha[string[count] - 'A'] += 1;
        }
        count ++;
    }
    printf("%d\n", word_num + 1);
    for(int i = 0; i < 26; i++){
        if(alpha[i] != 0){
            printf("%c : %d\n", (char)('a' + i), alpha[i]);
        }
    }
    return 0;
}

