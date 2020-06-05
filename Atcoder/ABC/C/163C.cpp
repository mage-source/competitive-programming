#include<iostream>
using namespace std;

int main()
{
    int N,boss;
    cin >> N;
    int A[N+1];
    int B[(200000)+1]{0};
    for(int i=2;i<(N+1);i++)
    {
        cin >> A[i];
        boss = A[i];
        B[boss] += 1;
    }
    for(int i=1;i<(N+1);i++)
    {
        cout << B[i] << endl;
    }
    return 0;
}
