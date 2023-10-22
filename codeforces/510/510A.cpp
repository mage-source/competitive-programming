#include<iostream>
using namespace std;

int main()
{
    int n,m,side=0;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        if(i==2)
        {
            cout << string((m-1),'.') + '#' << endl;
        }
        else if(i%2==0 && side==0)
        {
            cout << '#' + string((m-1),'.') << endl;
            side = 1;
        }
        else if(i%2==0 && side==1)
        {
            cout << string((m-1),'.') + '#' << endl;
            side = 0;
        }
        else
        {
            cout << string(m,'#') << endl;
        }
    }

    return 0;
}