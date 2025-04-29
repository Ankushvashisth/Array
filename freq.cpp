#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Array size"<<" ";
    cin>>n;
    int arr[n];
    int count =0;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int key; 
    cout<<"Enter feq no:";
    cin>>key;
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
       count++;
    }
    }

    cout<<count;
    }
