#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter array size : "<<" ";
    cin>>n;
    int arr[n];
     int product = 1;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
       product = product * arr[i];

    }
    cout<<"product of array : " <<product;
}