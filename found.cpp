#include<iostream>
using namespace std;
int main(){
     int N;
     cin>>N;
     int arr[N];
     for(int i=0; i<N; i++){
        cin>>arr[i];
     }
     int x;
     cin>>x;
     int index=-1;
     for(int i=0; i<N; i++){
        if(x==arr[i]){
            index = i;
            break;
        }
    }
    cout<<index;
       
}