#include<iostream>
using namespace std;
int main(){
    int month;
    while(cin >> month){
        if(month >= 3 && month <= 5)
            cout << "Spring\n";
        else if(month >= 6 && month <= 8)
            cout << "Summer\n";
        else if(month >= 9 && month <= 11)
            cout << "Autumn\n";
        else 
            cout << "Winter\n";
    }
    return 0;
}
