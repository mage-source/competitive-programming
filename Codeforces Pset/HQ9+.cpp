#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool condition = false;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            condition = true;
            break;
        }
    }
    if(condition)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}