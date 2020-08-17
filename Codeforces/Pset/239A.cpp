#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll y, k, n;
    cin >> y >> k >> n;
    bool lock = false;
    for(int i=k;i<=n;i+=k) {
        if(i>y) {
            cout << i - y << " ";
            lock = true;
        }
    }
    if(!lock) cout << "-1\n";
    return 0;
}