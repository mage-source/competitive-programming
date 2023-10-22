#include <bits/stdc++.h>
using namespace std;

#define sz 1000001

#define pb push_back
#define mk make_pair

typedef long long ll;
typedef pair<ll,ll> pii;

vector<ll> v[sz];
set<ll> st;

int main()
{
    ll n, x, k;
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> x;
        v[x].pb(i);
        st.insert(x);
    }

    vector<pii> res;

    for(auto i:st) {
        if(v[i].size() == 1) 
            res.pb(mk(i, 0));
        else {
            map<ll,ll> cnt;
            
            for(int j=1; j<v[i].size();j++) {
                cnt[fabs(v[i][j]-v[i][j-1])]++;
            }

            if(cnt.size() == 1) 
                res.pb(mk(i,v[i][1]-v[i][0]));
        }
    }
    
    cout << res.size() << endl;

    for(auto i:res) {
        cout << i.first << " " << i.second << endl;;
    }
    return 0;
}