#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int num = 1;
    //space
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i+j>=n+1){
                cout<< num;
                num++;
                
            }else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
    // for(int i = 1; i<=n; i++){
    //     for(int j = 4; j>0; j--){
    //         cout<<i;

    //     }
    //     cout<<endl;
    // }
}