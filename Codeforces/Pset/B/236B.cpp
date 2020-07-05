#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a, b, c, i, j, k, sum=0, t[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin >> a >> b >> c;
    for(i=1;i<=a*b*c;i++) {
        for(j=i;j<=a*b*c;j+=i) t[j]++; // precompute number of divisors for every number in range 
    }
    for(i=1;i<=a;i++) {
        for(j=1;j<=b;j++) {
            for(k=1;k<=c;k++) {
                sum += t[i*j*k];
            }
        }
    }
    cout << sum << endl;
    return 0;
}