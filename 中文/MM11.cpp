#include<iostream>
using namespace std;
int main() {
    int dollar;
    cin >> dollar;
    cout << "NT10=" << dollar / 10 << endl; 
    dollar = dollar % 10;
    cout << "NT5=" << dollar / 5 << endl;
    dollar = dollar % 5;
    cout << "NT1=" << dollar << endl;
}