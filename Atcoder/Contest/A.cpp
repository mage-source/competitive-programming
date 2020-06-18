#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K, A, B;
    cin >> K >> A >> B;
    bool multiple = false;

    for(int i=A;i<=B;i++) {
        if(i%K == 0) multiple = true;
    }

    if(multiple) cout << "OK" << endl;
    else cout << "NG" << endl;

    return 0;
}