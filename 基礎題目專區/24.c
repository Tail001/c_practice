#include<stdio.h>
#include<stdlib.h>
int main(){
    long int  n, p;
    long double r, sum = 0; //sum must declare here
    scanf("%Lf %ld %ld" ,&r, &n, &p);
    for(int i = 0; i < n; i++){
        sum += p;
        sum *= (1.0 + r);
    }
    printf("%ld\n", (long int)sum);
    return 0;
}