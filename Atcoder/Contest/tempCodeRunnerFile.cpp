#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, Q;
    cin >> N >> M >> Q;

    int ans = 0;
    while(Q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b-a == c) ans += d;
    }
    cout << ans << endl;

    return 0;
}