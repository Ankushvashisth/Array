#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;
    //space
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            int sum = i +j;
            if(sum%2==0){
                    cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
        cout<<endl;
    }
}