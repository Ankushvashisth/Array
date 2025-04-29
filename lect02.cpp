#include<iostream>
using namespace std;
int main () {
    //array declafration;
    int Ankushdata [5];
    int value;
    for(int i =0; i<5; i++){
        cin>>value;
        Ankushdata[i]=value;
    }
    //access each data from each indexes
    cout<<Ankushdata[0]<<" ";
    cout<<Ankushdata[1]<<" ";
    cout<<Ankushdata[2]<<" ";
    cout<<Ankushdata[3]<<" ";
    cout<<Ankushdata[4]<<" ";
}