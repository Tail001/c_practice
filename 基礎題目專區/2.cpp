#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int i;
  while(cin >> i){
    double k = round(i * 16) ;
    if((int)k % 10 == 0){
      cout << k / 10 << ".0" << endl;
    }
    else
      cout << k / 10 << endl;
  }
}