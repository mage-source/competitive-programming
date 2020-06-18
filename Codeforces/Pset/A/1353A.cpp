#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        
        int ans;
        ans = min(2,n-1) * m;
        cout << ans << '\n';
    }
    
    return 0;
}