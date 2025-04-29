#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    int odd ;
    int even;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i = 0; i<n; i++){
        if(arr[i]% 2 == 0){
            even = arr[i];
            cout<<even<<" ";
        }
    }
        for(int i = 0; i<n; i++){
            if(arr[i]% 2 != 0){
                odd = arr[i];
                cout<<odd<<" ";
            }
    }
}
