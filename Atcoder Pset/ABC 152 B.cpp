#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    string c,d;
    c = to_string(a);
    d = to_string(b);
    for(int i=1;i<b;i++) {
        c += to_string(a);
    }
    for(int i=1;i<a;i++) {
        d += to_string(b);
    }
    if(c<d) {
        cout << c << endl;
    }
    else {
        cout << d << endl;
    }
    return 0;
}
