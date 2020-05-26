#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,ans=0;
    string S;
    cin >> N >> S;
    for(int i=1;i<S.length();i++) {
        if(S[i]!=S[i-1]) ans++;
    }
    cout << ans+1 << endl;
    return 0; 
}
