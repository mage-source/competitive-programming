#include<iostream>
#include<set>
using namespace std;

int main()
{
    string s;
    getline(cin ,s);
    set<int> mySet;
    set<int>::iterator itr;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]<123 && s[i]>96)
        {
            mySet.insert(s[i]);
        }
    }
    cout << mySet.size() << endl;

    return 0;
}