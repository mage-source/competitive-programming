#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, i, f[1001]={};
    cin >> n;
    int a[n];
    for(i=0;i<n;i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    sort(f, f+1001);
    if(f[1000]<=(n+1)/2) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}