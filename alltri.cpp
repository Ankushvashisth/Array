#include<iostream>
using namespace std;
int main(){
    int n = 4;
    //square
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
// 
//left triangle
// for(int i = 1; i<=n; i++){
//     for(int j = 1; j<=i; j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

//reverse triangle
// 

// right triangle
// for(int i =1; i<=n; i++){
//     for(int j= 1; j<=n; j++){
//        if(i+j>=n+1){
//         cout<<"*";
//        }else{
//         cout<<" ";
//        }
//     }
//     cout<<endl;
// }

//reverse right triangle.
for(int i = 1; i<=n; i++){
    for(int j = 1; j<=n; j++){
        if(i<=j){
            cout<<"*";
        }else{
            cout<<" ";

        }
    }
    cout<<endl;
}
}