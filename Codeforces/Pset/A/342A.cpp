#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int a[8];

int main()
{
    int n, t, x;
    cin >> n;
    t = n;
    while(t--) {
        cin >> x;
        a[x]++;
    }
    if(a[5]!=0 || a[7]!=0 || a[1]!=n/3 || a[6]+a[4]!=a[2]+a[3] || a[2]<a[4] || a[6]<a[3]) cout << "-1\n";
    else {
        for(int i=0;i<a[4];i++) {
            cout << "1 2 4" << endl;
        }
        for(int i=0;i<a[2]-a[4];i++) {
            cout << "1 2 6" << endl;
        }
        for(int i=0;i<a[3];i++) {
            cout << "1 3 6" << endl;
        }
    }
    return 0;
}