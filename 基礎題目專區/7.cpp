#include<iostream>
using namespace std;
class complex{
public:
    int real;
    int imaginary;
};
int main(){
    int num;
    char oper;
    complex x, y, res;
    cin >> num;
    for(int i = 0; i < num; i++){ // conduct three times
        cin >> oper;
        cin >> x.real >> x.imaginary >> y.real >> y.imaginary;
        switch (oper){
            case '+':
                res.real = x.real + y.real;
                res.imaginary = x.imaginary + y.imaginary;
                break;
            case '-':
                res.real = x.real - y.real;
                res.imaginary = x.imaginary - y.imaginary;
                break;
            case '*':
                res.real = x.real * y.real - (x.imaginary * y.imaginary);
                res.imaginary = x.real * y.imaginary + y.real * x.imaginary;
                break;
        }
        cout << res.real << " " << res.imaginary << endl;
    }
    return 0;
}
