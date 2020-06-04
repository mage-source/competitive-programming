#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    long long A[N], B[N+1];
    for(int i=0;i<N+1;i++) {
        cin >> A[i];
    }
    for(int i=0;i<N;i++) {
        cin >> B[i];
    }

    long long ans = 0;
    for(int i=0;i<N;i++) {
        long long V = min(A[i], B[i]);
        A[i] -= V;
        B[i] -= V;
        ans += V;

        V = min(A[i+1], B[i]);
        A[i+1] -= V;
        B[i] -= V;
        ans += V;
    }
    cout << ans << endl;
    return 0;
}
