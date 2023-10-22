#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, a, num1=0, num2=0;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a;
        if(a==100) num1++;
        else num2++;
    }

    if((num1&1) || ((!num1)&&(num2&1))) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}