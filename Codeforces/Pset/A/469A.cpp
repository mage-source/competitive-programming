#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,p,p1,correctSum,actualSum=0;
    cin >> n;
    set<int> mySet;
    for(int i=0;i<2;i++)
    {
        cin >> p;
        while(p--)
        {
            cin >> p1;
            mySet.insert(p1);
        }
    }
    set<int>::iterator it;
    for(it=mySet.begin();it!=mySet.end();++it)
    {
        actualSum += *it;
    }
    correctSum = (n*(n+1))/2;
    if(actualSum==correctSum)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}