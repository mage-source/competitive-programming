#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long X, P=100;
    cin >> X;
    
    long long i = 1;
    while(P<X) {
        P += P / 100;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}