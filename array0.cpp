#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int ary [n];
    for (int i=0; i<n;i++)
    {

        cin>>ary[i];
    }
    for(int i = 0; i<n; i++){ 
        if(ary[i] % 2 == 0){
            cout<<0 <<" ";
        }else{
            cout<<1<<" ";
        }
    }
}