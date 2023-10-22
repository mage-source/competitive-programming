#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, k;
    cin >> n >> k;
    pair<int, int> a[50];
    for(int i=0;i<n;i++) {
        cin >> a[i].first >> a[i].second;
        a[i].first *= -1;
    }
    sort(a, a+n);
    cout << count(a, a+n, a[k-1]) << endl; // don't need additional sort since it will compare the pairs
    return 0;
}