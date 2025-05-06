#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

int a = arr[0];
for(int i=0; i<n-1; i++){
    for(int j = 0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
        int x = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = x;
    }
}
}
for(int i =0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
cout<<"largets no. : "<<arr[n-1]<<endl;
cout<<" second largest no. :" <<arr[n-2]<<endl;
cout<<"third largest  no. : "<<arr[n-3]<<endl;
}