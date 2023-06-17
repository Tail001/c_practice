#include<iostream>
using namespace std;
int main(){
    int x;
    while(cin >> x){
        bool prime = true;
        if(x >= 0 && x < 2 ){
            cout << "NO\n";
        }
        else{
            for(int i = 2; i < x; i++){
                if(x % i == 0){
                    prime = false;
                    break;
                }
            }
            if(prime) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}