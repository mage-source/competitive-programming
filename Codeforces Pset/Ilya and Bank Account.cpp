#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    if(n>(-10))
    {

    }
    else if(n>(-100) && n<(-9))
    {
        a = (n%10)*(-1);
        n = (n/10)*-1;
        if(a>n)
        {
            n = n*(-1);
        }
        else
        {
            n = a*(-1);
        }
    }
    else
    {
        a = (n%10)*(-1);
        b = (n/10)*(-1);
        b = b%10;
        if(a>=b)
        {
            n /= 10;
        }
        else
        {
            n /= 100;
            n *= 10;
            n -= a;
        }
    }
    cout << n << endl;;
    return 0;
}