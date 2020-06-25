#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
 int n, m, s=0, a[100];
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i=0;i<m;i++) {
        if(a[i]<0) s += a[i];
    }
    
    cout << abs(s) << endl;return 0;
}