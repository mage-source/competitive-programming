#include<iostream>
using namespace std;

long long d(int a) {
    long long digits = 0;
    while(a) {
        ++digits;
        a /= 10;
    }
    return digits;
}

int main() {
    long long a,b,x;
    cin >> a >> b >> x;
    long long left=0,right=1000000001;
    while(right-left>1) {
        long long mid = (left+right)/2;
        if(a*mid+b*d(mid)>x) right = mid;
        else left = mid;
    }
    cout << left << endl;
    return 0;
}
