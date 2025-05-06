#include <iostream>
using namespace std;
int main()
{
    int N, count = 0, j = 1;
    cin >> N;
    for(int i=2; i<=N/2; i++){
        if(N%i==0){
            count++;
            break;
        }
    }
    if(count == 0){
        cout<<"is  a prime"<<endl;
    }else{
        cout<<"is not a prime";
    }
    
}
