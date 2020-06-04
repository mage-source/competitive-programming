#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a,int b) {
    while(b) {
        a %= b;
        swap(a,b);
    }
    return a;
}

int main() {
    long long a,b,g;
    cin >> a >> b;
    g = gcd(a,b);
    cout << (a*b)/g << endl;
    return 0;
}
