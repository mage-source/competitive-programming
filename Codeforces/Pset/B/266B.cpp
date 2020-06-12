#include<iostream>
using namespace std;

int main()
{
    int n,t;
    string s;
    cin >> n >> t >> s;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<s.size();j++)
        {
            if(s[j]=='G' && s[j-1]=='B')
            {
                s[j] = 'B';
                s[j-1] = 'G';
                j++;
            }
        }
    }
    cout << s << endl;

    return 0;
}
