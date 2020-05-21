#include<iostream>
using namespace std;

int main()
{
    int y,year,n1,n2,n3,n4;
    cin >> y;
    bool yearDistinct=false;
    while(!yearDistinct)
    {
        year = y+1;
        n4 = year%10;
        year /= 10;
        n3 = year%10;
        year /= 10;
        n2 = year%10;
        year /= 10;
        n1 = year%10;
        if(n1==n2 || n1==n3 || n1==n4 || n2==n4 || n3==n4 || n2==n3)
        {
            yearDistinct = false;
        }
        else
        {
            yearDistinct = true;
            break;
        }
        y++;
    }
    cout << y+1 << endl;
    return 0;
}