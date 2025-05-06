#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int rows = 1; rows<=n; rows++){
        char ch='A';
        for(int col =1; col<=n; col++){
            cout<<ch;
            ch++;
           
        }
        cout<<endl;
    }
}