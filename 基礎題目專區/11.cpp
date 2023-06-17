#include<iostream>
using namespace std;
int main(){
    int row, col;
    while(cin >> row >> col){
        int matrix[100][100];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin >> matrix[i][j];
            }
        }
        for(int i = 0; i < col; i++){
            for(int j = 0;j < row; j++){
                if(j == row - 1) cout << matrix[j][i];
                else cout << matrix[j][i] << " " ;
            }
            cout << endl;
        }
    }
    return 0;
}