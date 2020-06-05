#include<iostream>
using namespace std;

int main()
{
    double n,p,m,fraction;
    cin >> n;
    m = n;
    while(n--)
    {
        cin >> p;
        fraction += p/100;
    }
    printf("%.12f",(100*(fraction/m)));

    return 0;
}
