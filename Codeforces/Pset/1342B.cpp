#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        int a[2] = {0,0};
        for(int i=0;i<s.length();i++) {
            if(s[i] == '1') a[1] = 1;
            else if(s[i] == '0') a[0] = 1;
        }
        if((a[1] == 1 && a[0] == 0) || (a[0] == 1 && a[1] == 0)) {
            cout << s << endl;
        }
        else {
            string ans = "";
            for(int i=0;i<s.size();i++) {
                ans += "10";
            }
            cout << ans << endl;
        }
    }

    return 0;
}