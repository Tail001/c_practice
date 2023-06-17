#include<iostream>
using namespace std;
int main(){
    int all;
    int a, b, c;
    //a = 15, b = 20, c = 30
    int d = 0, e = 0, f = 0;
    char comma;
    cin >> all >> comma >> a >> comma >> b >> comma >> c;
    all = all - 15 * a - 20 * b - 30 * c;
    if(all < 0){
        cout << "0\n";
        return 0;
    }
    while(all >= 0){
        if(all >=  50){
            f++;
            all -= 50;
            continue;
        }
        else if(all >= 5){
            e++;
            all -= 5;
            continue;
        }
        else if(all >= 1){
            d++;
            all -= 1;
            continue;
        }
        else
            break;
    }
    cout << d << "," << e << "," << f << endl;
    return 0;
}
