#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n+1];

for(int i = 0; i<=n; i++){
    arr[i] = i;
    
}int sum = 0;

for(int i = 0; i<=n; i++){
    sum = sum+ arr[i];
   

}
cout<<sum;
}

