#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    double mile, km;
    while (cin >> mile) {    // input num is equal one
        km = mile * 1.6;                  // transformation
        km = (int)(km * 10 + 0.5) * 0.1;  // rounding
        cout << fixed << setprecision(1);
        cout << km << endl;
    }
}