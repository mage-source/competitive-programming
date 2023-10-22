#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        int r = n % 10;
        int res = (r - 1) * 10;
        int step = 0;
        for (int i=1; i <= 4; i++) {
            step += i;
            n /= 10;
            if (!n) 
                break;
        }
        res += step;
        cout << res << endl;
    }

    return 0;
}
