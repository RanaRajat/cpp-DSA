#include <iostream>
#include <cstdlib>  // For exit()
using namespace std;

int main() {
    int choice;

    for (;;) {  // Infinite loop
        cout << "Enter a choice (1, 2, or 0 to exit): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Option 1 selected." << endl;
                break;
            case 2:
                cout << "Option 2 selected." << endl;
                break;
            case 0:
                cout << "Exiting the program." << endl;
                //break;
                exit(1);  // Exits the entire program
            default:
                cout << "Invalid option. Try again." << endl;
        }
    }

    return 0;
}
