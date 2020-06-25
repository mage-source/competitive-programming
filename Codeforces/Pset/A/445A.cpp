#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> x(n);
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++) 
            if(x[i][j]=='.') x[i][j] = (i+j)&1 ? 'B' : 'W';
    for(int i=0;i<n;i++) cout << x[i] << endl;
    return 0;
}