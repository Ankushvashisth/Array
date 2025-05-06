#include<iostream>
using namespace std;
int main(){
int n;
   cin>>n;
   // int num =1; 
   for(int rows = 0; rows<n; rows++){
       for(int col =0; col<rows; col++){
           cout<<" ";
           // num++;
       }
       for(int j=0; j<n-rows; j++){
       cout<<(rows+1);
    }
    cout<<endl;
}
}