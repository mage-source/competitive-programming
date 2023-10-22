#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, current;
    cin >> n;
    if(n==0) {
        cout << 0 << " " << 0 << " " << 0;
    }
    else if(n==1) {
        cout << 1 << " " << 0 << " " << 0;
    }
    else {
        vector<ll> a;
        a.push_back(0);
        a.push_back(1);
        ll j = 2;
        while(current != n) {
            current = a[j-1] + a[j-2];
            a.push_back(current);
            j++;
        }
        j--;
        cout << a[j] - a[j-1] << " " << a[j-2] << " " << a[j-3] << endl;
    }
    return 0;
}