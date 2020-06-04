#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    ll L,R;
    cin >> L >> R;

    if((L)/2019 != R/2019) {
       cout << 0 << endl; 
    }
    else {
        ll ans = INT_MAX;
        for(ll i=L;i<R+1;i++) {
            for(ll j=i+1;j<R+1;j++) {
                ans = min((i*j)%2019,ans);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
