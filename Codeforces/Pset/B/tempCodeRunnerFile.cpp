#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define N 200100
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

ll t;
cin >> t;

while(t--) {
    ll n, moves = 0;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);

    ll minA = INT_MAX;
    ll minB = INT_MAX;
    for(ll i=0;i<n;i++) {
        cin >> a[i];
        if(a[i] < minA) 
            minA = a[i];
    }
    for(ll i=0;i<n;i++) {
        cin >> b[i];
        if(b[i] < minB) 
            minB = b[i];
    }

    if(minA >= minB) {
        for(ll i=0;i<n;i++) {
            if(a[i] > minA && b[i] > minB) {
                a[i] -= (b[i] - minB);
                moves += (b[i] - minB);
                b[i] = minB;
            }
        }
        for(ll i=0;i<n;i++) {
            if(a[i] > minA) {
                moves += (a[i] - minA);
                a[i] = minA;
            }
        }
        for(ll i=0;i<n;i++) {
            if(b[i] > minB) {
                moves += (b[i] - minB);
                b[i] = minB;
            }
        }
        cout << moves << endl;
    } else {
        for(ll i=0;i<n;i++) {
            if(b[i] > minB && a[i] > minA) {
                b[i] -= (a[i] - minA);
                moves += (a[i] - minA);
                a[i] = minA;
            }
        }
        for(ll i=0;i<n;i++) {
            if(b[i] > minB) {
                moves += (b[i] - minB);
                b[i] = minB;
            }
        }
        for(ll i=0;i<n;i++) {
            if(a[i] > minA) {
                moves += (a[i] - minA);
                a[i] = minA;
            }
        }
        cout << moves << endl;
    }
}

    return 0;
}