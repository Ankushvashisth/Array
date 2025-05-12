#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int pft[n];
    pft [n-1] = 0;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
 
    for(int i = n-2; i>=0; i--){
        pft[i]=max(pft[i+1],arr[i+1]);
       
    }
    for(int i = 0; i<n; i++){
    cout<<pft[i] <<" ";
}
}