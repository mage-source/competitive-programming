#include<iostream>
#include<string>
#include<set>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    set<int> mySet;
    for(int i=0;i<s.length();i++)
    {
        mySet.insert(s[i]);
    }
    if(mySet.size()%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
 
    return 0;
}