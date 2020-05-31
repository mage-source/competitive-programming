#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    float ans=0;
    cin >> N;
    int V[N];
    for(int i=0;i<N;i++) {
        cin >> V[i];
    }
    sort(V,V+N);
    ans = V[0];
    for(int i=1;i<N;i++) {
        ans = (ans+V[i])/2;
    }
    cout << ans << endl;
    return 0;
}
