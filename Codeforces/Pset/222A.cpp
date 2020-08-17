#include <bits/stdc++.h>
using namespace std;

#define max 100001
typedef long long ll;
int a[max];

int main()
{
    int i, n, k;
    cin >> n >> k;
    for(i=1;i<=n;i++) {
        cin >> a[i];
    }
    for(i=k+1;i<=n;i++) {
        if(a[i]!=a[k]) break;
    }
    if(i!=n+1) {
        cout << "-1\n";
    }
    else {
        for(i=k-1;i>=0&&a[i]==a[k];i--);
        cout << i << "\n";
    }
    return 0;
}