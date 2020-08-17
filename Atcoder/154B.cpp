#include<iostream>
#include<string>
using namespace std;

int main()
{
    int l;
    string s;
    cin >> s;
    l = s.length();
    for(int i=0;i<l;i++) {
        cout << "x";
    }
    cout << endl;
    return 0;
}
