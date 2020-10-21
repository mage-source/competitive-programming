#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<m;i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    bool flag = false;
    for(int i=a[n-1];i<b[0];i++) {
        for(int j=0;j<n;j++) {
            if(i >= a[j]*2) {
                flag = true;
                ans = i;
            }
        }
        if(flag) break;
    }
    if(flag) cout << ans << endl;
    else cout << -1 << endl;
    return 0;
}