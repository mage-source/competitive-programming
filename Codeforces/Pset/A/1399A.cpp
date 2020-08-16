#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define N 200100
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

int t, n;
cin >> t;

while(t--) {
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end(), greater<int>());
    bool flag = false;
    while(a.size() != 1) {
        if(abs(a[a.size()-1]-a[a.size()-2]) <= 1) {
            a.pop_back();
        } else {
            flag = true;
            break;
        }
    }
    if(flag) cout << "NO\n";
    else cout << "YES\n";
}
    return 0;
}