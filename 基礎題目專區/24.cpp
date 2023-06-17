#include<iostream>
using namespace std;
int main(){
    long int  n, p;
    long double r, sum = 0; //sum must declare here
    cin >> r >> n >> p;
    for(int i = 0; i < n; i++){
        sum += p;
        sum *= (1.0 + r);
    }
    cout << (long int)sum << endl;
    return 0;
}