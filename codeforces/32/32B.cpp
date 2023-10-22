#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;
    for(i = 0;i < s.size() - 1;i++) {
        if(s[i] == '.') {
            cout << "0";
        }
        else if(s[i] == '-' && s[i+1] == '.') {
            cout << "1";
            i++;
        }
        else {
            cout << "2";
            i++;
        }
    }
    int n = s.size();
    if(i != n) {
        cout << "0";
    }
    

    return 0;
}