#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;
    //space
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
    // Bottom half
    for (int i = n-1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}
