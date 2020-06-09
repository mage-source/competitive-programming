#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, k, a1, a2, d;
    cin >> t;
    while(t--) {
        cin >> n >> m >> k;
        d = n/k;
        a1 = min(d, m);
        a2 = ceil((1.0 * (m-a1))/(k-1));
        cout << a1 - a2 << endl;
    }
    return 0;
}
