#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int diff = 0;
    string s;
    string t;
    cin >> s;
    t = s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++) {
        if(s[i]!=t[i]) {
            diff++;
        }
    }
    cout << diff/2 << endl;
}
