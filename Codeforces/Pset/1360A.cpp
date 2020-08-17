#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b;
        int ans = (2 * min(a,b));
        c = max(a,b);
        ans = max(ans, c);
        ans *= ans;
        cout << ans << '\n';
    }

    return 0;
}