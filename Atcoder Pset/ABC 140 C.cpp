#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,ans=0;
    cin >> N;
    vector<int> A(N+1);
    vector<int> B(N);
    for(int i=1;i<=N-1;i++) {
        cin >> B[i];
    }
    for(int i=0;i<=N;i++) {
        A[i] = 0;
    }
    A[1] = B[1];
    for(int i=1;i<=N-1;i++) {
        A[i+1] = B[i];
        if(!(B[i]>=max(A[i],A[i+1]))) {
            A[i] = B[i];
        }
    }
    for(int i=1;i<=N;i++) {
        ans += A[i];
    }
    cout << ans << endl;
    return 0;
}
