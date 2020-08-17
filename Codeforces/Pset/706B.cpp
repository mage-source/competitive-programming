#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    ll n;
    ll q;
    cin >> n;
    vector<ll> prices(n+1);
    for(ll i=1;i<=n;i++) {
        cin >> prices[i];
    }
    cin >> q;
    vector<ll> coins(q+1);
    for(ll i=1;i<=q;i++) {
        cin >> coins[i];
    }
    
    ll cSize = *max_element(prices.begin(),prices.end());
    vector<ll> c(cSize+1);
    for(ll i=1;i<=n;i++) {
        c[prices[i]]++;
    }

    vector<ll> prefixSum(cSize+1);
    prefixSum[0] = 0;
    for(ll i=1;i<=cSize;i++) {
        prefixSum[i] = prefixSum [i-1] + c[i];
    }
    
    ll ans;
    for(ll i=1;i<=q;i++) {
        if(coins[i]>=prefixSum.size()) {
            ans = n;
        }
        else {
            ans = prefixSum[coins[i]];
        }
        cout << ans << endl;
    }
    return 0;
}
