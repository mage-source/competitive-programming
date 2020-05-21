#include<iostream>
using namespace std;

int main()
{
    int n,moves=0;
    cin >> n;
    while(n)
    {
        if((n-5)>=0)
        {
            n -= 5;
            moves++;
        }
        else if((n-4)>=0)
        {
            n -= 4;
            moves++;
        }
        else if((n-3)>=0)
        {
            n -= 3;
            moves++;
        }
        else if((n-2)>=0)
        {
            n -= 2;
            moves++;
        }
        else if((n-1)>=0)
        {
            n -= 1;
            moves++;
        }
    }
    cout << moves << endl;
    return 0;
}