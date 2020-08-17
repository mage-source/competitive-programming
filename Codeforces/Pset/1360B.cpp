#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n, ans = INT_MAX;
        cin >> n;
        vector<int> s(n);
        for(int i=0;i<n;i++) {
            cin >> s[i];
        }
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                int d = abs(s[i] - s[j]);
                ans = min(ans, d);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}