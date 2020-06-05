#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    for(int i=0;i<s.length();i++) {
        int x = s[i]-'A';
        x = (x+n)%26;
        s[i] = 'A'+x;
    }
    cout << s << endl;
}
