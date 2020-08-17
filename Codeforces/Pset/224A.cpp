#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, a, b, c;
    cin >> s1 >> s2 >> s3;
    
    a = pow((s1*s3/s2), 0.5);
    b = pow((s1*s2/s3), 0.5);
    c = pow((s2*s3/s1), 0.5);

    int ans = 4 * (a + b + c);
    cout << ans << endl;
    return 0;
}