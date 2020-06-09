#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> p(N+1);

    for(int i=1;i<=N;i++) {
        cin >> p[i];
    }
    int k = 0;
    for(int i=1;i<=N;i++) {
        if(p[i] != i) k++;
    }
    if(k<=2) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
