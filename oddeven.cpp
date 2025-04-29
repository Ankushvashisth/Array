#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    int odd = 0;
    int even = 0;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i = 0; i<n; i++){
        if(arr[i]% 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<"odd no."<< odd <<endl;
    cout<<"even no."<<even<<endl;
}