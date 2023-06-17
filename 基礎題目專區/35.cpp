#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void qsort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        qsort(arr, low, pi - 1);
        qsort(arr, pi + 1, high);
    }
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int T, m, k;
        int total = 0;
        cin >> T >> m >> k;
        int list[k];
        for(int i = 0; i < k; i++){
            cin >> list[i];
        }
        qsort(list, 0, k - 1);
        for(int i = 0; i < m; i++){
            total += list[i];
        }
        if(total > T){
            cout << "Impossible\n";
        }
        else{
            cout << total << endl;
        }
    }
    return 0;
}