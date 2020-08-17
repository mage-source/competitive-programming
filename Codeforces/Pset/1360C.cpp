#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        int evens=0,odds=0;
        for(int i=0;i<n;i++) {
            cin >> a[i];
        }
        for(int i=0;i<n;i++) {
            if(a[i]%2==0) {
                evens++;
            }
            else {
                odds++;
            }
        }

        if(odds%2==0 && evens%2==0) {
            cout << "YES" << '\n';
        }
        else {
            sort(a.begin(),a.end());
            bool consecutive = false;
            for(int i=0;i<n-1;i++) {
                if(abs(a[i]-a[i+1]) == 1) {
                    consecutive = true;
                }
            }
            if(consecutive) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }

    return 0;
}