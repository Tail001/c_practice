#include<stdio.h>
#include<string.h>
#define endl printf("\n");
int main(){
   char *input;
   input = malloc(sizeof(char) * 100);
   gets(input);
   char haha[100];
   strcpy(haha, input);
   puts(haha);
}