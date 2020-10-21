#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0;
    cin >> n;
    int a[n],b[n];

    for(int i=0;i<n;i++) {
        cin >> a[i] >> b[i];
    }

    for(int i=0;i<n;i++) {
        int l=0,r=0,u=0,d=0;
        for(int j=0;j<n;j++) {
            if(a[i]==a[j] && b[i]<b[j]) d = 1;
            if(a[i]==a[j] && b[i]>b[j]) u = 1;
            if(a[i]>a[j] && b[i]==b[j]) l = 1;
            if(a[i]<a[j] && b[i]==b[j]) r = 1;
        } 
        if(l==1 && r==1 && u==1 && d==1) ans ++;
    }
    cout << ans << endl;
    return 0;
}