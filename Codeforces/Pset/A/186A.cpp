#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if(s1.size() != s2.size()) cout << "NO\n";
    else {
        int diff = 0;
        for(int i=0;i<s1.size();i++) {
            if(s1[i] != s2[i]) diff++;
        }
        if(diff == 2) {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if(s1 == s2) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    return 0;
}