#include<iostream>
using namespace std;
int main(){
    int n =5;
    for(int i =1; i<=n; i++){
        for(int space =1; space<=n-i; space++){
            cout<<" ";
        }
        for(int j = 1; j<=i; j++){
            cout<<j;

        }
        for(int j =i-1; j>=1; j--){
            cout<<j;
        }
        cout<<endl;

    }
}
