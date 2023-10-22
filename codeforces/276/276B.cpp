#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int cnt[26] = {};
    for(char c:s)
        cnt[c-'a']++;
    int odd = 0;
    for(int i=0;i<26;i++)
        if(cnt[i]&1) odd++;
    if(odd < 2) 
        cout << "First\n";
    else 
        cout << (odd&1 ? "First\n":"Second\n");
    return 0;
}