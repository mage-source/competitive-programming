#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, m, v=0, p=0;
    cin >> n;
    ll a[n+1];
    ll b[n+1];
    for(ll i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(ll i=1;i<=n;i++) {
        b[a[i]] = i;
    }
    cin >> m;
    while(m--) {
        ll x;
        cin >> x;
        v += b[x];
        p += (n - b[x] +1);
    }
    cout << v << " " << p << endl;
    return 0;
}