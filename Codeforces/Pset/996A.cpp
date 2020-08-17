#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int a[5];
    a[0] = 100;
    a[1] = 20;
    a[2] = 10;
    a[3] = 5;
    a[4] = 1;
    
    int i = 0;
    int bills = 0;
    while(n) {
        if(n>=a[i]) {
            n -= a[i];
            bills++;
        }
        else
        {
            i++;
        }
    }
    cout << bills << endl;
    return 0;
}
