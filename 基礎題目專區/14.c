#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int tentimes(int times){
    if(times == 0 || times == 1)
        return 10;
    else 
        return 10 * tentimes(times - 1);
}
int main(){
    int pal;
    while(scanf("%d", &pal) == 1){
        bool Palindrome = true;
        int temp = pal; // need to be divided
        int digit = 0;
        while(temp > 0){
            digit++;
            temp /= 10;
        } // get the digit
        int temp_digit = digit;
        for(int i = 0; i < digit / 2; i++){
            int left = pal / tentimes(temp_digit - 1);
            int right = pal % 10;
            if(left != right){
                Palindrome = false;
                break;
            }
            pal = pal - tentimes(temp_digit - 1) * left;
            pal = pal / 10;
            temp_digit -= 2;
        }
        if(Palindrome) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
