#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Array size"<<" ";
    cin>>n;
    int arr[n];
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    bool found = false;
    int a; 
    cout<<"Enter found no:";
    cin>>a;
    for(int i = 0; i<n; i++){
        if(arr[i] == a){
            cout<<"Num. is found : "<<arr[i];
            found = true;
            break;
    }
    }
    if(!found){
        cout<<"Num is not found ";
    }
    cout<<endl;
    }
