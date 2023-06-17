#include<iostream>
using namespace std;
int main() {
    int a, b;  // two nums
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    
    if (a < 0) {  // consider negative condition
        cout << a << "/" << b << "=" << (a / b - 1) << "..." << (a % b + b) << endl;
    } else {
        cout << a << "/" << b << "=" << (a / b) << "..." << (a % b) << endl;
    }
}