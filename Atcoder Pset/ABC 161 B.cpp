#include<iostream>
using namespace std;

int main()
{
    float N,M,C,P,S=0,T=0;
    int A[1001];
    cin >> N >> M;
    C = 1/(4*M);
    for(int i=1;i<=N;i++)
    {
        cin >> A[i];
        T+=A[i];
    }
    for(int i=1;i<=N;i++)
    {
        P = A[i]/T;
        if(P>=C)
        {
            S++;
        }
    }
    if(S>=M)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
