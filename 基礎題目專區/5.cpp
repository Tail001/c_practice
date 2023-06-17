#include<iostream>
using namespace std;
int main(){
    int input;
    while(cin >> input){
        int res[8] = {0}; // int array, don't need to store /0
        if(input < 0) input += 256; // 2 ^ 8 = 256
        for(int i = 0; i < 8; i ++){
            res[7 - i] = input % 2;
            input /= 2;
        }
        for(int i = 0; i < 8; i++)
            cout << res[i];
        cout << endl;
    }
    return 0;
}
