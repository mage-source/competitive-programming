#include<iostream>
using namespace std;

int main()
{
    int n,h,width=0;
    cin >> n >> h;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
        if(A[i]>h)
        {
            width+=2;
        }
        else
        {
            width++;
        }
    }
    cout << width << endl;

    return 0;
}