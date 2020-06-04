#include<iostream>
using namespace std;

int main()
{
    int n,k,m,sum=0;
    cin >> n >> k >> m;
    int a[n-1];
    for(int i=0;i<n-1;i++) {
        cin >> a[i];
        sum += a[i];
    }
    if((sum+100)/n<m) {
        cout << -1 << endl;
    }
    else if((m*n)-sum<0) {
        cout << 0 << endl;
    }
    else {
        if((m*n)-sum>k) {
            cout << -1 << endl;
        }
        else {
            cout << (m*n)-sum << endl;
        }
    }
    return 0;
}
