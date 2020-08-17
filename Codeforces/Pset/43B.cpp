#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
string a, b;
map<char, int> ma;

int main()
{
    getline(cin, a);
    getline(cin, b);
    for(int i=0;i<a.length();i++) {
        if(a[i]!=' ') ma[a[i]]++;
    }
    bool bisa = true;
    for(int i=0;i<b.length();i++) {
        if(b[i]!=' ') ma[b[i]]--;
        if(ma[b[i]]<0) {
            bisa = false;
            break;
        }
    }
    if(bisa) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}