#include<iostream>
using namespace std;

int main()
{
    long long N,K,A,B;
    cin >> N >> K;
    A = N%K;
    B = K-(N%K);
    if(A<=B) {
        cout << A << endl;
    }
    else {
        cout << B << endl;
    }
    return 0;
}
