#include<iostream>
using namespace std;

int main()
{
    int n,m,i;
    cin >> n >> m;
    i = min(n,m);
    if(i%2==1)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }


    return 0;
}