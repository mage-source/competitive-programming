#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    int n, t, sum=0;
    cin >> n;
    vector<int> a;
    while (n--) {
        cin >> t;
        a.emplace_back(t);
        sum += t;
    }
    sort(a.begin(), a.end(), greater<int>());

    int cur=0, ans=0, j=0;
    while (cur <= sum) {
        cur += a[j];
        sum -= a[j];
        ++ans;
        ++j;
    }
    cout << ans << endl;

    return 0;
}
