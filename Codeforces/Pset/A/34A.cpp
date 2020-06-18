#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m=INT_MAX, ans1, ans2;
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(int i=1;i<=n-1;i++) {
        int temp = abs(a[i]-a[i+1]);
        if(temp<m) {
            m = abs(a[i]-a[i+1]);
            ans1 = i;
            ans2 = i+1;
        }
    }
    if(abs(a[1]-a[n]) <  m) {
        ans1 = 1;
        ans2 = n;
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}