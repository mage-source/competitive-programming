#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,p;
    cin >> n;
    vector<int> myVect(n+1);
    for(int i=1;i<=n;i++)
    {
        cin >> p;
        myVect[p] = i;
    }
    for(int i=1;i<=n;i++)
    {
        cout << myVect[i] << " ";
    }
    return 0;
}