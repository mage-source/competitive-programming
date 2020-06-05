#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,count=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++) {
        if(i>1) {
            if((s[i]=='C' && s[i-1]=='B' && s[i-2]=='A')) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
