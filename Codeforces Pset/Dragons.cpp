#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
    int n,s,x,y,t,count=0;
    cin >> s >> n;
    t = n;
    multimap<int,int> m;
    multimap<int,int>::iterator itr;
    while(n--)
    {
        cin >> x >> y;
        m.insert(pair<int,int>(x,y));

    }
    for(itr = m.begin();itr!=m.end();++itr)
    {
        if(s>(itr->first))
        {
            s += (itr->second);
            count++;
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    }
    if(count==t)
    {
        cout << "YES" << endl;
    }

    return 0;

}