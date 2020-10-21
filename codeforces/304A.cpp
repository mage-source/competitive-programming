#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll n, ans=0;
    cin >> n;
    for(int i=1;i<=n;i++) { 
        for(int j=i;j<=n;j++) {
            ll t = floor(sqrt(i*i+j*j));
            if(t<=n && t*t==(i*i+j*j)) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}