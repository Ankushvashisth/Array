#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b && a<c){
        cout<<"smallest no :"<<a;
     }else if (b<a && b<c)
     {
        cout<<"smallest no : "<<b;
            
     }else{
        cout<<"smallest no :"<<c
     }
     
}