#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i=1;i<=n;i++) {
        int x;
        cin >> x;
        a[i] = ceil(1.0 * x / m);
    }
    int ans, t = INT_MIN;
    for(int i=1;i<=n;i++) {
        if(a[i] >= t) {
            t = max(a[i], t);
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}