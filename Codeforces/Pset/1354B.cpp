#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    string s;
    cin >> t;

    while(t--) {
        cin >> s;
        int abc[3] = {-1, -1, -1};
        int d = INT_MAX;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '1') abc[0] = i;
            if(s[i] == '2') abc[1] = i;
            if(s[i] == '3') abc[2] = i;
            if(abc[0] < 0 || abc[1] < 0 || abc[2] < 0) continue;
            d = min(d, 1 + max({abc[0], abc[1], abc[2]}) - min({abc[0], abc[1], abc[2]}));
        }
        cout << (d==INT_MAX ? 0:d) << endl;
    }
    
    return 0;
}