#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l;
    int p[n];

    for(int i=0;i<n;i++)
    {
        cin >> p[i];
    }

    sort(p,p+n);
    //compares outer edges, extra *2 is to cancel out division
    r = max(p[0],l-p[n-1])*2;

    for(int i=1;i<n;i++)
    {
        r = max(r,p[i]-p[i-1]);
    }
    printf("%.10f",(r/2.0));

    return 0;
}