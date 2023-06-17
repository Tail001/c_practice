#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int gender;
    double height, weight;
    while(cin >> height >> gender){
        switch (gender){
            case 1:
                weight = (height - 80) * 0.7;
                break;
            case 2:
                weight = (height - 70) * 0.6;
            default:
                break;
            }
        cout << fixed << setprecision(1);
        cout << weight << endl;
        // printf("%.1lf\n", weight);
    }  
}