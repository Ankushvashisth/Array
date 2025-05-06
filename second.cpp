#include <iostream>
using namespace std;

int main() {
    int n;
    int index=0; 
    int index2=0; 
    int index3=0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            index = i;
        }
    }

    arr[index] = 0; 
    int max2 = arr[0];
    for (int i = 1; i < n; i++) {
        if (max2 < arr[i]) {
            max2 = arr[i];
            index2 = i;
        }
    }
    arr[index2] = 0; 
    int max3 = arr[0];
    for (int i = 1; i < n; i++) {
        if (max3 < arr[i]) {
            max3 = arr[i];
            index3 = i;
        }
    }

    cout << max3 << " " << index3;

    return 0;
}