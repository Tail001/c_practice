#include<iostream>
using namespace std;
int judge(int table[3][3]){
    //judge
    //in rows
    for(int i = 0; i < 3; i++){
        if(table[i][0] == table[i][1] && table[i][1] == table[i][2] ){
            return 1; // suuccess
        }
    }
    // in column
    for(int i = 0; i < 3; i++){
        if(table[0][i] == table[1][i] && table[1][i] == table[2][i]){
            return 1; // suuccess
        }
    }
    if(table[0][0] == table[1][1] && table[1][1] == table[2][2]){
        return 1;
    }
    if(table[0][2] == table[1][1] && table[1][1] == table[2][0]){
        return 1;
    }
    return 0;
}
int main(){
    int table[3][3];
    int outcome = 0;
    //input
    for(int i = 0; i < 3; i++){
        cin >> table[i][0] >> table[i][1] >> table[i][2];
    }
    
    outcome = judge(table);
    // output result
    if(outcome == 1){
        cout << "True\n";
        return 0;
    }
    cout << "False\n";
    return 0;
}