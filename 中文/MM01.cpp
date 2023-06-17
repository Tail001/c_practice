#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float upper, down, height;
    double area;
    // area = (upper + down ) * height / 2
    while(cin >> upper >> down >> height){
        area = (upper + down) * height / 2;
        // area = ((int)(area * 100 + 5)) * 0.01;
        cout << fixed << setprecision(1);
        cout << "Trapezoid area:" << area << endl;
    }
}