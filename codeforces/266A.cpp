#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int n,removes=0;
    cin >> n;
    string s;
    for(int i=0;i<n;i++)
    {
        string a;
        cin >> a;
        s.insert(i,a);
    }
    // the answer just ends up being the number of consecutive pairs
    for(int j=0;j<s.length();j++)
    {
        if (s[j] == s[j + 1])
        {
            removes++;
        }
    }
    cout << removes << endl;
    return 0;
}