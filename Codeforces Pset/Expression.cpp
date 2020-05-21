#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int r1,r2,r3,r4,r5,r6,max1,max2,max3,max4,maxf;
    r1 = a+b*c;
    r2 = a*(b+c);
    r3 = a*b*c;
    r4 = (a+b)*c;
    r5 = (a*b)+c;
    r6 = a+b+c;
    max1 = max(r1,r2);
    max2 = max(r3,r4);
    max3 = max(max1,max2);
    max4 = max(max3,r5);
    maxf = max(max4,r6);
    cout << maxf << endl;

    return 0;
}