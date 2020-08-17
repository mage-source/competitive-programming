#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string a;
    bool flag = false;
    cin >> a;
    for(int i=0;i<a.size();i++) {
        if(a[i]=='0') {
            a.erase(i, 1);
            flag = true;
            break;
        }
    }
    if(flag) cout << a << endl;
    else {
        a.erase(1, 1);
        cout << a << endl;
    }
    return 0;
}