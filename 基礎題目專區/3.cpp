#include<iostream>
using namespace std;
int main(){
  int x = 0, y = 0;
  while(cin >> x >> y){
    int distanceSquare = x * x + y * y;
    if(distanceSquare < 10000)
      cout << "inside\n";
    else cout << "outside\n";
  }
}