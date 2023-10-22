#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int m, n;
    cin >> n >> m;

    int clicks = 0;

    while(n<m) {
        n *= 2;
        clicks++;
    }
    if(n==m) {
        cout << clicks << endl;
    }
    else {
        while(n!=m) {
            n--;
            clicks++;
        }
        cout << clicks << endl;
    }
    return 0;
}

// RESOLVE
