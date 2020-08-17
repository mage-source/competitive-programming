#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, m, l;
    cin >> n >> m;
    vector<int> a(n);
    set<int> s;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=n-1;i>=0;i--) {
        s.insert(a[i]);
        a[i] = s.size();
    }
    while(m--) {
        cin >> l;
        cout << a[l-1] << endl;
    }

    return 0;
}