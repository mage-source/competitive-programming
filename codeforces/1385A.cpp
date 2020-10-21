#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t, x, y, z;
    cin >> t;
    while(t--) {
        cin >> x >> y >> z;
        int mx, mn, mxcount = 0;
        mx = max(x, max(y, z));
        mn = min(x, min(y, z));
        if(x==mx) mxcount++;
        if(y==mx) mxcount++;
        if(z==mx) mxcount++;
        if(mxcount == 3) {
            cout << "YES\n";
            cout << mn << " " << mn << " " << mn << endl;
        } 
        else if (mxcount == 2) {
            cout << "YES\n";
            cout << mx << " " << mn << " " << mn << endl;
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}