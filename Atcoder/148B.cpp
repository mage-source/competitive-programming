#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    string t;
    string u;
    cin >> s >> t;
    for(int i=0;i<n;i++) {
        u += s[i];
        u += t[i];
    }
    cout << u << endl;
    return 0;
}
