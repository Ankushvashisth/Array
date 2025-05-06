#include<iostream>
using namespace std;
int main(){

    //Traingle pattern
    int n = 4;
   
    for(int rows = 1; rows<=n; rows++){
        for(int col =1; col<=rows; col++){
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<endl;
    //inverted triangle pattern
    int x = 5;
   
    for(int rows = 1; rows<=x; rows++){
        for(int col =rows; col<=x; col++){
            cout<<" * ";
        }
        cout<<endl;
    }

}