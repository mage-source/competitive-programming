#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    ll t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;
        
        ll ans = 0;
        ll v = 8;
        for(ll i=1;i<=(n/2);i++) {
            ans += i*v;
            v += 8;
        }
        
        cout << ans << '\n';
    } 

    return 0;   
}