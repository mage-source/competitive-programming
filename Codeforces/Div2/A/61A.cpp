#include<iostream>
using namespace std;

int main()
{
    string s;
    string t;
    string u;
    cin >> s >> t;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=t[i])
        {
            u += '1';
        }
        else
        {
            u += '0';
        }
    }
    cout << u << endl;

    return 0;
}