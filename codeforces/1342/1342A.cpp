#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll ans;
        if(2 * a >= b) {
            ll num1 = abs(x - y) * a;
            ll num2 = min(x, y) * b;
            ans = num1 + num2;
        }
        else {
            ans = (x + y) * a;
        }
        
        cout << ans << endl;
    }
    return 0;
}