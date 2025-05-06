#include<iostream>
using namespace std;
int main(){
    char arr[5] = {'V','i','K','a','s'};
    char ans ;

    for(int i =0; i<5;i++){
        if(arr[i] >='a' && arr[i <='z']){
         arr[i] = arr[i] - 32;
        
        }
        else if(arr[i] >='A' && arr[i] <='Z'){
            arr[i] = arr[i] + 32;
        }
        cout<<arr[i]<<" ";
    
}
// for(int i =0; i<5;i++){
//     if(arr[i] >='A' && arr[i <='Z']){
//      arr[i] = arr[i] + 32;
//     }
//     cout<<arr[i]<<" ";
//     // cout<<(int)ans <<" ";

// }
}