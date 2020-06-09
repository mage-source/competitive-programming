#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,sockets=1,ans=0;
    cin >> A >> B;
    while(sockets<B) {
        sockets--;
        sockets += A;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
