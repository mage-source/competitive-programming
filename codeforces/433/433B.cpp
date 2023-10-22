#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll a[1000001], b[1000001], s1[1000001], s2[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, m;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    s1[0] = a[0];
    s2[0] = b[0];
    for(int i=1;i<n;i++) {
        s1[i] = a[i] + s1[i-1];
        s2[i] = b[i] + s2[i-1];
    }
    cin >> m;
    while(m--) {
        int type, l, r;
        cin >> type >> l >> r;
        if(type==1) {
            cout << s1[r-1] - s1[l-2] << endl;
        }
        else {
            cout << s2[r-1] - s2[l-2] << endl;
        }
    }

    return 0;
}