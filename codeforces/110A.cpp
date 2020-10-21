#include<iostream>
using namespace std;

int main()
{
    //only need to check 4 and 7 because next lucky number would be 44 which is out of range of input
    long long int n,digit,count=0;
    cin >> n;
    while(n)
    {
        digit = n%10;
        if(digit==4 || digit==7)
            count++;
        n /= 10;
    }
    if(count==4 || count==7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}