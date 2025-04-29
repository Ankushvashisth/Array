#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter array size :";
    cin>>n;
    int arr[n];
    int positive = 0;
    int negative = 0;
   
    for(int i =0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i = 0; i<n; i++){
        if(arr[i]>0){
            positive++;
        }else{
            negative++;
        }
    }
    cout<<"negativeno."<<  negative <<endl;
    cout<<"positive no."<<positive<<endl;
}