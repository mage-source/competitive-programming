#include <bits/stdc++.h>
#define N 100100
using namespace std;

typedef long long ll;

int T, n, k, z, ans, num[N], qz[N], mx[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int i, j;
    cin >> T;
    while(T--) {
        ans = 0;
        cin >> n >> k >> z;
        for(i=1;i<=n;i++) {
            cin >> num[i];
            qz[i] = qz[i-1] + num[i];
            if(i>1) {
                mx[i] = max(mx[i-1], num[i]+num[i-1]);
            }
        }
        // for(int i=1;i<=n;i++) {
        //     cout << qz[i] << " ";
        // }
        // cout << endl;
        // for(int i=1;i<=n;i++) {
        //     cout << mx[i] << " ";
        // }
        // cout << endl;
        for(i=0;i<=z;i++) {
            if(k+1-2*i>=1) {
                ans = max(ans,qz[k+1-2*i]+i*mx[min(n,k+2-2*i)]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}