#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ary [n];
    for (int i=0; i<n;i++)
    {
        cin>>ary[i];
    }
    for (int i=0;i<n;i++)
    {
        cout<<ary[i]*2<<" ";
    }
    // cout<<ary[0]*ary[0]<<" ";
    // cout<<ary[1]*ary[1]<<" ";
    // cout<<ary[2]*ary[2]<<" ";
    // cout<<ary[3]*ary[3]<<" ";
    // cout<<ary[4]*ary[4]<<" ";
    // cout<<ary[5]*ary[5]<<" ";
    // cout<<ary[2]*2<<" ";
}