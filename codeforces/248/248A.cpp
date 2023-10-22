#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, lOpen = 0, lClose = 0, rOpen = 0, rClose = 0;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a >> b;
        if(a == 1) lOpen++;
        if(b == 1) rOpen++;
        if(a == 0) lClose++;
        if(b == 0) rClose++;
    }
    int ans;
    ans += n - max(lOpen,lClose);
    ans += n - max(rOpen, rClose);
    cout << ans << endl;

    return 0;
}