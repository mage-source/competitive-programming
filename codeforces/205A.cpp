#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int mi, m=INT_MAX;
    bool repeat = false;
    for(int i=0;i<n;i++) {
        if(a[i]<m) {
            m = a[i];
            mi = i;
        }
    }
    for(int i=0;i<n;i++) {
        if(a[i]==m && i!=mi) repeat = true; 
    }
    if(repeat) {
        cout << "Still Rozdil" << endl;
    }
    else {
        cout << mi + 1 << endl;
    }
    return 0;
}