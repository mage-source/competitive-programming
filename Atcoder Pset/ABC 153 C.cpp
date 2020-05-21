#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long n,k,sum=0;
    cin >> n >> k;
    long long h[n];
    for(int i=0;i<n;i++) {
        cin >> h[i];
    }
    sort(h,h+n);
    for(int i=1;i<=k;i++) {
        h[n-i] = 0;
    }
    for(int i=0;i<n;i++) {
        sum += h[i];
    }
    cout << sum << endl;
    return 0;
}
