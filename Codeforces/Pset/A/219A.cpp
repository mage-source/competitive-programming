#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int k;
    string s;
    cin >> k >> s;
    map<char,int> m;
    for(auto a:s) m[a]++;
    for(auto a:m) {
        if(a.second%k != 0) cout << "-1\n", exit(0);
    }
    string ss = "";
    for(auto a:m) ss += string(a.second/k,a.first);
    while(k--) cout << ss;
    cout << endl;
    return 0;
}