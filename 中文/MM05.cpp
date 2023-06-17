#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double len, area;
    while (cin >> len) {
        // area = len ^ 2
        area = len * len;
        area = (int)(area * 10 + 0.5) * 0.1;  // rounding
        cout << fixed << setprecision(1);
        cout << area << endl;
    }
}