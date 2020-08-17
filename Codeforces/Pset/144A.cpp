#include<iostream>
using namespace std;

int main()
{
    int n, s, a[100],i,max=0,min;
    cin >> n;
    min = (n-1);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[max] < a[i])
        {
            max = i;
        }
    }
    for(int i=min;i>=0;i--)
    {
        if(a[min]>a[i])
        {
            min = i;
        }
    }
    s = max-1+n-min;
    if(min<max)
    {
        s--;
    }
    cout << s << endl;

    return 0;
}