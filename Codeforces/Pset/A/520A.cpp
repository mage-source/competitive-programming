#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,sum=0;
    string str;
    set<int> s;
    set<int>::iterator itr;

    cin >> n;
    cin >> str;
    if(n<26)
    {
        cout << "NO" << endl;
    }
    else
    {
        for(int i=0;i<str.size();i++)
        {
            str[i] = tolower(str[i]);
            s.insert(str[i]);
        }
        for(itr=s.begin();itr!=s.end();itr++)
        {
            sum += (*itr);
        }
        if(sum==2847)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}