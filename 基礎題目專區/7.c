#include<stdio.h>
#include<stdlib.h>
struct complex{
    int real;
    int imaginary;
};
int main(){
    int num;
    char operator;
    struct complex x, y, res;
    scanf("%d", &num);
    for(int i = 0; i < num; i++){ // conduct three times
        scanf(" %c", &operator);
        scanf("%d %d %d %d", &x.real, &x.imaginary, &y.real, &y.imaginary);
        switch (operator){
            case '+':
                res.real = x.real + y.real;
                res.imaginary = x.imaginary + y.imaginary;
                break;
            case '-':
                res.real = x.real - y.real;
                res.imaginary = x.imaginary - y.imaginary;
                break;
            case '*':
                res.real = x.real * y.real - (x.imaginary * y.imaginary);
                res.imaginary = x.real * y.imaginary + y.real * x.imaginary;
                break;
        }
        printf("%d %d\n", res.real, res.imaginary);
    }
    return 0;
}
