#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N,ans=0;
    cin >> N;

    for(int i=1;i<=N;i++) {
        string s = to_string(i);
        if(s.size()%2!=0) ans++;
    }
    cout << ans << endl;
}
