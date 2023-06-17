#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float down, height;
    // triangle area is equal down * height / 2
    scanf("%f %f", &down, &height);
    cin >> down >> height;
    cout << fixed << setprecision(1);
    cout << down * height / 2 << endl;

}