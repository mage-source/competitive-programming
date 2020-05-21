#include<iostream>
using namespace std;

int main()
{
    int N,K,operations=0;
    cin >> N >> K;
    while(N)
    {
        N /= K;
        operations++;
    }
    cout << operations << endl;
}
