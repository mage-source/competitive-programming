#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    int t, n, x;
    cin >> t;

    while (t--) {
       cin >> n; 
       vector<int> a;
       for (int i = 0; i < n; ++i) {
           cin >> x;
           a.push_back(x);
       }
       int mx = *max_element(a.begin(), a.end());
       int dominant = -1;
       for (int i = 0; i < a.size(); ++i) {
           if (a[i] == mx) {
               if (i == 0) {
                   if (a[i] > a[i+1]) { 
                       dominant = i;
                       break;
                   }
               } else if (i == a.size()-1) {
                   if (a[i] > a[i-1]) {
                       dominant = i;
                       break;
                   }
               } else {
                   if (a[i] > a[i+1] || a[i] > a[i-1]) {
                       dominant = i;
                       break;
                   }
               }
           }
       }
       if (dominant == -1) {
           cout << "-1" << endl;
       } else {
           cout << dominant + 1 << endl;
       }
    }

    return 0;
}

