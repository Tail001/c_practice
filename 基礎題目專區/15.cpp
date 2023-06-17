#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  int count = 1;
  int arr[26] = {0};
  getline(cin, str);
  for (int i = 0; i < str.length(); i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      arr[str[i] - 'A']++;
    else if (str[i] >= 'a' && str[i] <= 'z')
      arr[str[i] - 'a']++;
    if (str[i] == ' ')
      count++;
  }
  cout << count << endl;
  for (int j = 0; j < 26; j++) {
    if (arr[j] != 0)
      cout << (char)('a' + j) << " : " << arr[j] << endl;
  }
  return 0;
}
