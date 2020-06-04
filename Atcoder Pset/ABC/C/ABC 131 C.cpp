#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    if(b==0) {
        return a;
    }
    else {
        return gcd(b, a%b); 
    }
}

ll lcm(ll a, ll b) {
    return (a*b)/gcd(a,b);
}

ll F(ll A, ll X) {
    return A/X;
}

ll F(ll L, ll R, ll X) {
    return ( F(R, X) - F(L-1, X) );
}

int main() 
{
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll ans;
    ans = (B-A+1) - F(A, B, C) - F(A, B, D) + F(A, B, lcm(C,D));
    cout << ans << endl;
    return 0; 
}
