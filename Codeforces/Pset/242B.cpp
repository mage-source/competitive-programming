#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, l, r, mx=INT_MIN, mn=INT_MAX;
    cin >> n;

    vector<int> seg;
    while(n--) {
       cin >> l >> r;
       seg.push_back(l);
       seg.push_back(r);
       if(l<mn) mn = l;
       if(r>mx) mx = r;
    } 
    int j=1;
    bool flag = false;
    for(int i=1;i<=seg.size();i+=2) {
        if(seg[i]==mx && seg[i-1]==mn) {
            flag = true;
            break;
        }
        j++;
    }
    if(flag) cout << j << endl;
    else cout << "-1\n";
    return 0;
}