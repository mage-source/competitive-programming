#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i=0;i<n;i++) {
            cin >> arr[i];
        }
        int x, y;
        for(x=n-2;x>=0;x--) {
            if(arr[x]<arr[x+1]) break;
        }
        if(x==-1) cout << "0\n";
        else {
            for(y=x-1;y>=0;y--) {
                if(arr[y]>arr[y+1]) break;
            }
            cout << y+1 << endl;
        }
    }

    return 0;
}