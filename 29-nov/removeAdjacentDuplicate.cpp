#include <iostream>
#include <string>

using namespace std;

void removeAdjacentDuplicates(string& str) {
    int n = str.length();
    int j = 0;

    for (int i = 1; i < n; i++) {
        if (str[i] != str[j]) {
            j++;
            str[j] = str[i];
        }
    }

    str.erase(j + 1);
}

int main() {
    string str = "abc";
    str[2] = 'o';
    removeAdjacentDuplicates(str);
    cout << str << endl;

    return 0;
}