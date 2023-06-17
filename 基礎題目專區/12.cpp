#include<iostream>
using namespace std;
int recursive(int x) {
    if (x == 0 || x == 1) {
        return x + 1;
    } else {
        return recursive(x - 1) + recursive(x / 2);
    }
}
int main() {
    int x;
    cin >> x;
    cout << recursive(x) << endl;
    return 0;
}