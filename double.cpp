#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int brr[n];
        for(int i = 0; i<n; i++){
            brr[i]= arr[i]*arr[i];
        }
        for(int i = 0; i<n; i++){
            cout<<brr[i]<<" ";
        }
    }
    

