#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    long long ans=0;
    cin >> N;
    unordered_map<string, long long> umap;
    string s;
    while(N--) {
        cin >> s;
        sort(s.begin(),s.end());
        if(umap.find(s) == umap.end()) {
            umap.insert(make_pair(s, 1));
        }
        else {
            umap.at(s) += 1;
        }
    }
    unordered_map<string, long long>::iterator itr;
    for(itr = umap.begin();itr != umap.end(); itr++) {
        long long x = itr->second;
        ans += (x*(x-1))/2;
    }
    cout << ans << endl;
    return 0;
}
