#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int ans = INT_MAX;
    int index =0;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n; i++){
        if(arr[i]<ans){
            ans=arr[i];
            index = i;
        }
    }
    arr[index]=INT_MAX;
    index =0;
    for(int i=0;i<n; i++){
        if(arr[i]<ans){
            ans=arr[i];
            index = i;
        }
    }
    cout<<ans<<" "<<index;
}