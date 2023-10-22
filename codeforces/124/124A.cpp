#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = min(n-a, b+1);
    cout << ans << endl; 
    return 0;
}