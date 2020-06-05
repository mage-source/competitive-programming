#include<iostream>
#include<string>
using namespace std;

int main()
{
    int danger1=0,danger0=0;
    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            danger1++;
            if(danger1>=7)
            {
                cout << "YES" << endl;
                return 0;
            }
        } else{
            danger1=0;
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            danger0++;
            if(danger0>=7)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        else{
            danger0=0;
        }
    }
    cout << "NO" << endl;
    return 0;
}