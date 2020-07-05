#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, x, y, s1=0, s2=0;
    bool flag = false;
    cin >> n;
    while(n--) {
        cin >> x >> y;
        s1 += x;
        s2 += y;
        if((!(x&1) && (y&1)) || (x&1) && !(y&1)) {
            flag = true;
        }
    }
    if(!(s1&1) && !(s2&1)) cout << "0\n";
    else if((!(s1&1) && (s2&1)) || (!(s2&1) && (s1&1))) cout << "-1\n";
    else {
        if(flag) cout << "1\n";
        else cout << "-1\n";
    }
    return 0;
}