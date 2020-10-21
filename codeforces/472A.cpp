#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n==12)
    {
        cout << 4 << " " << 8;
    }
    else if(n%2!=0)
    {
        cout << 9 << " " << (n-9);
    }
    else
    {
        cout << 8 << " " << (n-8);
    }

    return 0;
}
 