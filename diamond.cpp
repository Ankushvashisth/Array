#include <iostream>
using namespace std;

int main() {
    int n = 3; // Half height of diamond (middle row is row 3)

    // Upper half including the middle row
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
