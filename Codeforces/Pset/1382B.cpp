#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5 + 5;
int t, n, a[N];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        int k = 0;
        while(k<n && a[k]==1) {
            k++;
        }
        cout << ((k==n) ^ (k%2) ? "Second" : "First") << '\n';
    }

    return 0;
}