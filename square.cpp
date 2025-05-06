#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int rows = 1; rows<=n; rows++){
        for(int col =1; col<=n; col++){
            cout<<ch;
            ch++;
        }
        
        cout<<endl;
    }
}