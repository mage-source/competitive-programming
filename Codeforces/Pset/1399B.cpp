#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define N 200100
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

int t;
cin >> t;

while(t--) {
    int n;
    cin >> n;
    ll a[n+10], b[n+10];
    ll am=INT_MAX, bm=INT_MAX;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        am = min(a[i], am);
    }
    for(int i=1;i<=n;i++) {
        cin >> b[i];
        bm = min(b[i], bm);
    }
    ll ans = 0;
    for(int i=1;i<=n;i++) {
        ans += max(a[i]-am, b[i]-bm);
    }
    cout << ans << endl;
}

    return 0;
}