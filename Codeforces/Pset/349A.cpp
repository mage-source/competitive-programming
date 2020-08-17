#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int n, x, _25=0, _50=0;
    bool flag = false;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> x;
        if(x==25) _25++;
        else if(x==50) {
            _50++;
            if(_25>=1) _25--;
            else {
                flag = true;
                break;
            }
        } 
        else {
            if(_50>=1 && _25>=1) {
                _50--;
                _25--;
            }
            else if(_25>=3) {
                _25 -= 3;
            }
            else {
                flag = true;
                break;
            }
        }
    }
    if(flag) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}