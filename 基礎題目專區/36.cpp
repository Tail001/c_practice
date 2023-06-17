#include<iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    if (year % 4 == 0) {
        if (year % 400 == 0)
            cout << "Bissextile Year\n";
        else
            cout << "Common Year\n";
    } else
        cout << "Common Year\n";
}