#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double temp, tran;
    while (cin >> temp) {
        // apply formula mentioned
        tran = temp * 9 / 5 + 32;
        tran = (int)(tran * 10 + 0.5) * 0.1;
        cout << fixed << setprecision(1);
        cout << tran << endl;
    }
}