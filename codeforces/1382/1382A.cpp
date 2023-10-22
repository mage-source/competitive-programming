#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int a[1001], b[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    while(t--) {
        int n, m, common;
        bool flag = false;
        cin >> n >> m;
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<m;i++) {
            cin >> b[i];
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[i] == b[j]) {
                    common = a[i];
                    flag = true;
                }
            }
        } 
        if(flag) {
            cout << "YES\n";
            cout << "1" << " " << common << endl;
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}