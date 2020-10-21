#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
char a[4][4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    bool flag = false;

    for(int i=0;i<4;i++) {
        for(int j=0;j<4;j++) {
            cin >> a[i][j];
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if((a[i][j]=='#')+(a[i+1][j]=='#')+(a[i][j+1]=='#')+(a[i+1][j+1]=='#') != 2) flag = true;
        }
    }

    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}