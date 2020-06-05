#include<iostream>
using namespace std;

int sumn(int n,int d)
{
    n /= d;
    return (d*n*(n+1))/2;
}

int main()
{
    int L,s,t,a=3,b=5;
    cin >> t;
    while(t--)
    {
        cin >> L;

        s = sumn(L-1,a) + sumn(L-1,b) - sumn(L-1,(a*b));
        cout << s << endl;
    }
    return 0;
}

// use long long to pass test cases for larger values