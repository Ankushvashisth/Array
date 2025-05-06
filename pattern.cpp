#include<iostream>
using namespace std;
int main(){
    int n =4;
    for(int i =1; i<=n; i++){
        if(i%2==0){
        for(int j= 1; j<=3; j++){
            cout<<" *";
        }
        }
        else{
            for(int j= 1; j<=n; j++){
                cout<<"* ";
        }
    }
        cout<<endl;
    }
}