#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;

    //Comparison not case sensitive, strings are same size
    for(int i=0;i<(a.length());i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(a[i]==b[i]){
            continue;
        }
        else if(a[i]>b[i]){
            cout << 1 << endl;
            return 0;
        }
        else{
            cout << -1 << endl;
            return 0;
        }


    }

    if(a==b)
    {
        cout << 0 << endl;
        return 0;
    }
}