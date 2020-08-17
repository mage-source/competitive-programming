#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> p;
        for(int i=0;i<(2*n);i++) {
            int a;
            cin >> a;
            if(find(p.begin(), p.end(), a) == p.end()) {
                p.push_back(a);
            }
        }
        for(int i=0;i<n;i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}