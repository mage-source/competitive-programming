#include<iostream>
using namespace std;

int main()
{
    int n,groups=1;
    cin >>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
        if(i>0)
        {
            if(A[i]!=A[i-1])
                groups++;
        }
    }
    cout << groups << endl;
}