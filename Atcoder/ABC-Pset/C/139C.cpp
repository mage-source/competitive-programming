#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,ans=0,moves=0;
    cin >> N;
    vector<int> H(N+1);

    for(int i=1;i<=N;i++) {
        cin >> H[i];
    }

    for(int i=1;i<=N-1;i++) {
        if(H[i]>=H[i+1]) {
            moves++;
        }
        else {
            ans = max(ans,moves);
            moves = 0;
        }
    }
    ans = max(ans,moves);
    cout << ans << endl;
    return 0;
}
