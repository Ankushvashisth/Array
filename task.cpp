#include<iostream>
using namespace std;
int  main(){
    int n;
    cin>>n;
    int arr[n];
    int sub = 0;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i =0; i<n; i++){
        sum = sum + arr[i];
    }
    
    for(int i = 0; i<n; i++){
        sub = sum - arr[i];
        sum = sub;
        cout<<sub<<" ";
    }
}