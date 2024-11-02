#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int i = 1;
  int k = n;
  while (i <= n) {
    int j = 1;
    int l = 1;
    string str = "";
    while (j <= k) {
      str = str + to_string(j) + " ";
      j++;
    }
    while (l <= i - 1) {
      str = str + "*" + " ";
      l++;
    }
    l--;
    while (l > 0) {
      str = str + "*" + " ";
      l--;
    }
    j--;
    while (j > 0) {
      str = str + to_string(j) + " ";
      j--;
    }
    cout << str;
    cout << endl;
    k--;
    i++;
  }
}