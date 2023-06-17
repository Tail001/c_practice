#include <iostream>
using namespace std;
int main() {
  int n;
  while (cin >> n) {
    // outcome n, n^2 and n^3
    cout << n << " " << n * n << " " << n * n * n << endl;
  }
}