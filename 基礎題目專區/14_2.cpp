#include<iostream>
using namespace std;
int main(){
    int pal;
    while (cin >> pal)
    {
        int rev_int = 0, temp = pal, remain = 0;
        while(temp != 0){
            remain = temp % 10;
            rev_int = rev_int * 10 + remain;
            temp /= 10;
        }
        if(rev_int == pal) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;   
}