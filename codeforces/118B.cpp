#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int H;

    for(int h=0;h<=2*n;h++) {
        H = h;
        if(H >= n) H = 2*n-H;

        for(int i=1;i<=2*(n-H);i++) {
            cout << " ";
        }
        cout << 0;
        for(int L=1;L<=H;L++) {
            cout << " " << L;
        }
        
        for(int L=H-1;L>=0;L--) {
            cout << " " << L;
        }
        cout << endl;
    }
    return 0;
}