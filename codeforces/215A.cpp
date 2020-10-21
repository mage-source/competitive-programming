#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxn = 1000;
int a[maxn], b[maxn];

int main()
{
    int n, m;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> m;
    for(int j=0;j<m;j++) cin >> b[j]; 
    int ans = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(b[j]%a[i] == 0) ans = max(ans,b[j]/a[i]);
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(b[j]%a[i] == 0 && b[j]/a[i] == ans) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}