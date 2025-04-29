#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int a = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i]<a)
        a = arr[i];
    }
    cout<<"minimun no. of array : "<<a;
}