#include<iostream>
using namespace std;
int main(){
int n;
   cin>>n;
   int num =1; 
   for(int rows = 0; rows<=n; rows++){
       for(int col =rows+1; col>0; col--){
           
           cout<<col<<" ";
          
       }
       cout<<endl;
   }
}