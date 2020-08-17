#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string t;
    int n, x=0, y=0;
    cin >> n;
    cin >> t;

    sort(t.begin(), t.end()-n);
    sort(t.begin()+n, t.end());

    for(int i=0;i<n;i++) {
        if(t[i]<t[n+i]) x++; 
        if(t[i]>t[n+i]) y++; 
    }

    if(x==n or y==n) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}