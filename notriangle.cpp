 #include<iostream>
 using namespace std;
 int main(){
 int n;
    cin>>n;
    int num =1; 
    for(int rows = 1; rows<=n; rows++){
        for(int col =1; col<=rows; col++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}