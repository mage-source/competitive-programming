#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n, ans=0;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<a.size();i++) cin >> a[i]; 
    sort(a.begin(), a.end());
    for(int i=0;i<a.size();i++) {
        ans += abs((i+1) - a[i]);
    } 
    cout << ans << endl;
    return 0;
}