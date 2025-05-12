#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int pft[n];
    pft [0] = 0;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
 
    for(int i = 1; i<n; i++){
        pft[i]=max(pft[i-1],arr[i-1]);
       
    }
    for(int i = 0; i<n; i++){
    cout<<pft[i];
}
}