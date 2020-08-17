#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,a;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin >> a;
        A[i] = a;
    }
    sort(A,A+n);
    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }

    return 0;

}