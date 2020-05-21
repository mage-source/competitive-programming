#include<iostream>
using namespace std;

int main()
{
    int n,k,count=0;
    cin >> n >> k;
    int *A = new int[n];
    for(int i=1;i<=n;i++)
    {
        cin >> A[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(A[k]!=0&&A[i]>=A[k])
        {
            count++;
        }
        else if(A[k]==0&&A[i]>0)
        {
            count++;
        }
    }
    cout << count << endl;
    delete[] A;

    return 0;
}