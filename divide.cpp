#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    // int odd = 0;
    int count = 0;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i = 0; i<n; i++){
        if(arr[i]% 4 == 0){
            count++;
        // }else{
        //     odd++;
        // }
    }
    }
    cout<<"count no."<< count<<endl;

}
//     cout<<"even no."<<even<<endl;
// }