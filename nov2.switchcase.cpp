#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int count500 = 0, count100 = 0, count20 = 0, count1 = 0;

    switch (1) {  // Using switch with a constant value to enter cases in sequence
        case 1:  // Case for 500 notes
            count500 = amount / 500;
            amount = amount % 500;
            // No break here to continue to the next case

        case 2:  // Case for 100 notes
            count100 = amount / 100;
            amount = amount % 100;

        case 3:  // Case for 20 notes
            count20 = amount / 20;
            amount = amount % 20;

        case 4:  // Case for 1 notes
            count1 = amount / 1;
            amount = amount % 1;
            break;
    }

    cout << "500 notes: " << count500 << endl;
    cout << "100 notes: " << count100 << endl;
    cout << "20 notes: " << count20 << endl;
    cout << "1 notes: " << count1 << endl;

    return 0;
}
