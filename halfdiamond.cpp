#include<iostream>
using namespace std;
int main(){
    int n = 3;
    // cin>>n;
    // int m;
    // cin>>m;
    for(int rows = 0; rows<=3; rows++){
        for(int col = 0; col<=;col++){
            if(col>=(n-rows)&& col<=(n+rows)){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

}