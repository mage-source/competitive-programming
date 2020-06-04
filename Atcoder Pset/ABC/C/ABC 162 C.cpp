#include<iostream>
using namespace std;

int gcd(int p, int q)
{
    if(q==0)
        return p;
    else
        return gcd(q,(p%q));
}

int main()
{
    long long K,sum=0;
    cin >> K;

    for(int i=1;i<=K;i++)
        for(int j=1;j<=K;j++)
            for(int l=1;l<=K;l++) {
                sum += gcd(gcd(i, j), l);
            }
    cout << sum << endl;
    return 0;
}
