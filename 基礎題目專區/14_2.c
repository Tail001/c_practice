#include<stdio.h>
#include<stdlib.h>
int main(){
    int pal;
    while (scanf("%d", &pal) == 1)
    {
        int rev_int = 0, temp = pal, remain = 0;
        while(temp != 0){
            remain = temp % 10;
            rev_int = rev_int * 10 + remain;
            temp /= 10;
        }
        if(rev_int == pal) printf("YES\n");
        else printf("NO\n");
    }
    return 0;   
}