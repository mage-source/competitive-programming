#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    if(n==1)
    {
        cout << "I hate it" << endl;
        return 0;
    }
    else if(n==1)
    {
        cout << " I hate that I love it" << endl;
        return 0;
    }
    else {
        for (int i = 1; i < n; i++) {
            if (i == 1) {
                s += "I hate that ";
            } else if (i == 2) {
                s += "I love that ";
            } else if (i % 2 == 1) {
                s += "I hate that ";
            } else {
                s += "I love that ";
            }
        }
    }
    if(n%2==1)
    {
        s += "I hate it";
    }
    else
    {
        s += "I love it";
    }
    cout << s << endl;

    return 0;
}