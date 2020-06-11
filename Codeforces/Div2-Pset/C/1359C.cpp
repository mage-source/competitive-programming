#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--) {
        ll h, c, t;
        cin >> h >> c >> t;

        if(t == h) {
            cout << "1" << endl;
        }
        else {
            if(2 * t <= (h + c)) {
                cout << "2" << endl;
            }
            else {
                ll x = (t - c) / (2 * t - h - c);
                ll y = x + 1;

                long double try1 = ((x * h) + (x - 1) * c) / (1.0 * (2 * x - 1));
                long double try2 = ((y * h) + (y - 1) * c) / (1.0 * (2 * y - 1));

                long double diff1 = abs(try1 - t);
                long double diff2 = abs(try2 - t);

                if(diff1 <= diff2) {
                    cout << 2 * x - 1 << endl;
                }
                else {
                    cout << 2 * y - 1 << endl;
                }
            }
        }
    }
    
    return 0;
}
