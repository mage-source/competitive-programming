#include <bits/stdc++.h>
using namespace std;
int b, a, s, m[10000], v[10000], max_a, min_a, i;

typedef long long ll;

int main()
{
    cin >> a >> s;
    for(i=0;i<s;i++) {
        cin >> m[i];
        v[i] = m[i];
    }
    i = 0;
    b = a;
    sort(v, v+s);
    while(a--) {
        if(v[i] == 0) i++;
        min_a += v[i];
        v[i]--;
    }
    i = a - 1;
    while(b--) {
        sort(m, m+s);
        max_a += m[s-1];
        m[s-1]--;
    }
    cout << max_a << " " << min_a << endl;
    return 0;
}   