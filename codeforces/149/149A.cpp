#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[15];

int main()
{
    int k, sum=0;
    cin >> k;
    for(int i=0;i<12;i++) {
        cin >> a[i];
    } 
    for(int i=0;i<12;i++) {
        sum += a[i];
    }
    sort(a, a+12, greater<int>());
    if(k == 0) {
        cout << 0 << endl;
    }
    else if(sum < k) {
        cout << -1 << endl;
    }
    else {
        int ans = 0;
        for(int i=0;i<12;i++) {
            k -= a[i];
            ans++;
            if(k <= 0) break;
        }
        cout << ans << endl;
    }
    return 0;
}