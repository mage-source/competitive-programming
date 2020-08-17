#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[150009];

int main()
{
    int i, n, k, min1=0, sum=0, sum1=0, imin=1;
    cin >> n >> k;
    for(i=1;i<=n;i++) {
        cin >> a[i];
        if(i<=k) {
            sum += a[i];
            min1 += a[i];
        }
    }
    for(i=2;i<=n-k+1;i++) {
        sum += a[i+k-1];
        sum -= a[i-1];
        if(min1>sum) {
            min1 = sum;
            imin = i;
        }
    }
    cout << imin << endl;
    return 0;
}