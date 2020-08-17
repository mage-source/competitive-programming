#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int k,n,mx=-1;
    cin >> k >> n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=2;i<=n;i++)
    {
        mx = max(mx,a[i]-a[i-1]);
    }
    mx = max(mx,k-a[n]+a[1]); // handles crossing northmost point
    cout << k-mx << endl;
}
