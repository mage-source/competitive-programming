#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, m;
    cin >> n >> m;
    if(n>=m) {
        for(int i=1;i<=m;i++) {
            cout << "BG";
        }
        for(int i=1;i<=n-m;i++) {
            cout << "B";
        }
    }
    else {
        for(int i=1;i<=n;i++) {
            cout << "GB";
        }
        for(int i=1;i<=m-n;i++) {
            cout << "G";
        }
    }
    return 0;
}