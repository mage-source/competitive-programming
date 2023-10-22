#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    for(int i=0;i<=1000;i++) {
        for(int j=0;j<=1000;j++) {
            if(pow(i,2) + j == n && i + pow(j,2) ==m) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}