#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define N 200100
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t,n,i,a,j;
    cin >> t;

    while(t--) {
        cin >> n;
        map<int,int> m;
        int s=0, ans=0;
        for(i=0;i<n;i++) {
            cin >> a;
            m[a]++;
        }
        for(i = 1;i<=100;i++) {
            s = 0;
            for(j=1;j<=50;j++) {
                if(m[j] && m[i-j]) {
                    s += min(m[j], m[i-j]);
                }
            }
            ans = max(ans, s);
        }
        cout << ans/2 << endl; // accounts for duplicates
    }

    return 0;
}