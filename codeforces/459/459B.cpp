#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for(ll i=0;i<n;i++) {
        ll t;
        cin >> t;
        a.push_back(t);
    }
    
    ll mx, mn, mxcnt=0, mncnt=0;
    sort(a.begin(), a.end());
    mx = a[n-1];
    mn = a[0];
    if(mx == mn) {
        ll ans = n*(n-1) / 2;
        cout << 0 << " " << ans << endl;
    }
    else {
        for(ll i=0;i<n;i++) {
            if(a[i] == mn) mncnt++;
            if(a[i] == mx) mxcnt++;
        }
        cout << mx - mn << " " << mncnt * mxcnt << endl;
    }
    return 0;
}