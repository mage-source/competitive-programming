#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int uppercaseCount = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>64 && s[i]<91)
        {
            uppercaseCount++;
        }
    }
    if(uppercaseCount==s.length())
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]<91)
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }
    else if(uppercaseCount==(s.length()-1) && s[0]>96)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]<91)
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}