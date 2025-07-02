#include <iostream>
using namespace std;

int main() {
    cout << "=== Symmetric Asterisk Pyramid Generator ===" << endl;

    int n;
    cout << "Enter an odd number for the height: ";
    cin >> n;

    if (n % 2 == 0 || n <= 0) {
        cout << "Please enter a **positive odd number**." << endl;
        return 1;
    }

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i += 2) {
        for (int s = 0; s < (n - i) / 2; ++s) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (int s = 0; s < (n - i) / 2; ++s) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
