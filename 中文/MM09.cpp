#include<iostream>
using namespace std;
int main() {
    int a;
    while (cin >> a) {  // continious input
        if (a >= 31)
            cout << "Value of more than 31\n";
        else {
            // logical shift algorithm
            cout << (2 << (a - 1)) << endl;
        }
        break;  // must added,IDK why
    }
}