#include<iostream>
using namespace std;
void arrOutput(int *arr, int size){
    cout << "array contents:" << endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insert(int *arr, int E, int size){
    for(int i = size - 1; i >= 0; i--){
        if(arr[i] > E) arr[i + 1] = arr[i];
        else{
            arr[i + 1] = E;
            break;
        }
    }
}
void inserttion(int *arr, int i, int E){
    int j;
    for(j = i - 1; j >= 0 && E < arr[j]; j--) arr[j + 1] = arr[j];
    arr[j + 1] = E;
}
int main(){
    int arr[5][5];
    int counter = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            arr[i][j] = counter++;
        }
    }
    cout << "address of *(*arr+17) is " << (*arr + 17) << ", and value is " << *(*arr + 17) << endl;
    cout << "address of (*(arr+3))[2] is " << &(*(arr+3))[2] << ", and value is " << (*(arr+3))[2] << endl;
    cout << "address of *((*(arr+3))+2) is " << ((*(arr+3))+2)<< ", and value is " << *((*(arr+3))+2) << endl;
    cout << "address of (*arr+3)[2] is " << &(*arr+3)[2]<< ", and value is " << (*arr+3)[2] << endl;

}
//0 2 4 5 7 9 10 23 44 49