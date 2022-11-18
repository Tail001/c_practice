#include <stdio.h>
#include <string.h>
int main(){
    char string[513], substring[129];
    while(gets(substring) != NULL){
        gets(string);
        int i = 0, res = 0;
        for(i = 0; i < strlen(string); i++){
            if( !strncmp(string + i, substring, strlen(substring))){
                res ++;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
