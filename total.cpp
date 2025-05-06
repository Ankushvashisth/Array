#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {2, 7, 4, 5, 3};
    int target = 9;
    
for(int i=0; i<n; i++){
    for(int j = i+1 ; j<n; j++){
        if(arr[i]+arr[j] == target){
        cout<<arr[i]<<","<<arr[j]<<endl;
    }
}
}
// for(int i =0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// cout<<"largets no. : "<<arr[n-1]<<endl;
// cout<<" second largest no. :" <<arr[n-2]<<endl;
// cout<<"third largest  no. : "<<arr[n-3]<<endl;
}