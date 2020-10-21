#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;
        if(l == r) {
            cout << l << " " << l << endl;
        }
        else if((2*l) <= r) {
            cout << (l) << " " << 2*l << endl;
        } else {
            cout << "-1 -1\n";
        }
    }

    return 0;
}