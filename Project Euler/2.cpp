#include<iostream>
using namespace std;

int main()
{
    long long L,temp,s=0,x=0,y=2;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> L;
        while (y < L)
        {
            s += y;
            temp = y;
            y = 4 * y + x;
            x = temp;
        }
        cout << s << endl;
    }
    return 0;
}