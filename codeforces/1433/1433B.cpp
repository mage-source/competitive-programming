#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    int t, n;
    int a[55];
    cin >> t;
    
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        // find first 1
        int fidx = -1;
        for (int i = 1; i <= n; ++i) {
            if (a[i] == 1) {
                fidx = i;
                break;
            }
        }

        // find last 1
        int lidx = -1;
        for (int i = n; i >= 1; --i) {
            if (a[i] == 1) {
                lidx = i;
                break;
            }
        }

        // handle edge case
        if (fidx == lidx) {
            cout << "0" << endl;
        } else {
            // use range to find number of gaps
            int gaps = 0;
            for (int i = fidx; i <= lidx; ++i) {
                if (a[i] == 0) {
                    gaps++;
                }
            }
            cout << gaps << endl;
        }
    }

    return 0;
}
