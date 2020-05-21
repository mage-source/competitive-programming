#include<iostream>
using namespace std;

int main()
{
    long long a,b,k;
    cin >> a >> b >> k;
    if(k-a<0) {
        cout << a-k << " " << b << endl;
    }
    else {
        k -= a;
        if(k-b<0) {
            cout << 0 << " " << b-k << endl;
        }
        else {
            cout << 0 << " " << 0 << endl;
        }
    }
    return 0;
}
