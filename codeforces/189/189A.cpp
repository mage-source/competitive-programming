#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, a, b, c, d, ans=1;
    cin >> n >> a >> b >> c;
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=n;j++) {
            d = n - (a*i) - (b*j);
            if(d>=0 && d%c==0) ans = max(ans, (i+j+d/c));
        }
    }
    cout << ans << endl;
    return 0;
}