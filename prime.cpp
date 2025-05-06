#include <iostream>
using namespace std;
int main()
{
    int N, count = 0, j = 1;
    cin >> N;
    while (j <= N)
    {
        if (N % j == 0)
            count++;
        j++;
    }
    if (count == 2)
    {
        cout << " is a prime no." << endl;
    }
    else
    {
        cout << "is not a prime no" << endl;
    }
}
