#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[7]; 
    for(int i=0;i<7;i++) {
        cin >> a[i];
    }
    int j = 0;
    while(true) {
        n -= a[j];
        if(n<=0) break;
        else {
            if(j==6) j=0;
            else j++;
        }
    }
    j++;
    cout << j << endl;
    return 0; 
}