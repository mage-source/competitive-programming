#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c5=0, c0=0;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        if(a==5) c5++;
        else c0++;
    }
    if(c0==0) {
        cout << -1 << endl;
    }
    else if(c5==0 || c5 < 9) {
        cout << 0 << endl;
    }
    else {
        vector<int> ans;
        int g5 = floor(1.0 * (c5/9)) * 9;
        while(g5--) {
            ans.push_back(5);
        }
        while(c0--) {
            ans.push_back(0);
        }
        for(int i=0;i<ans.size();i++) {
            cout << ans[i];
        }
    }
    return 0;
}