#include<iostream>
using namespace std;

int main()
{
    int n,a,oddCount=0,evenCount=0;
    cin >> n;
    int num[n];
    for(int i=1;i<=n;i++)
    {
        cin >> a;
        num[i] = a;
        if(a%2==0 || a==2)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(evenCount==1)
        {
            if(num[i]%2==0 || num[i]==2)
            {
                cout << i;
                break;
            }
        }
        else
        {
            if(num[i]!=2 && num[i]%2!=0)
            {
                cout << i;
                break;
            }
        }
    }

    return 0;
}