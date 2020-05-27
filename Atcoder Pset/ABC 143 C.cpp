#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,ans=0;
    string S;
    cin >> N >> S;
    S.push_back('#');
    for(int i=0;i+1<S.size();i++) {
        if(S[i]!=S[i+1]) ans++;
    }
    cout << ans << endl;
    return 0; 
}
