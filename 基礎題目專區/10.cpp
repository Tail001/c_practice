#include<iostream>
int main(){
    int x, y, temp;
    while(std::cin >> x >> y){
        while(y != 0){
            temp = y;    // We will switch values between two varable 
            y = x % y;  // So let:
            x = temp;   // x is always dividend
        }               // y is always divisor
        std::cout << x << std::endl;
    }
    return 0;
}