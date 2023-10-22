#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a1[300005], a2[300005], a3[300005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, x, i, k=0;
    cin >> n;
    for(i=1;i<=2*n;i++) {
        cin >> x;
        if(a1[x]==0) {
            a1[x] = i;
        }
        else {
            k++;
            a3[k] = i;
            a2[k] = a1[x];
            a1[x] = 0;
        }
    }
    if(k==n) {
        for(i=1;i<=k;i++) {
            cout << a2[i] << " " << a3[i] << "\n";
        }
    }
    else {
        cout << "-1\n";
    }
    return 0;
}