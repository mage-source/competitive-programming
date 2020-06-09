#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long N,A,B,blues,r;
    cin >> N >> A >> B;

    r = N % (A+B);
    blues = (N/(A+B))*A;
    blues += min(A,r);
    cout << blues << endl;
    return 0;
}
