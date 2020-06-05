#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(Q);
    vector<int> scores(N+1);
    for(int i=1;i<=N;i++) {
        scores[i] = K-Q;
    }
    for(int i=1;i<=Q;i++) {
        cin >> A[i];
    }
    for(int i=1;i<=Q;i++) {
        scores[A[i]]++;
    }
    for(int i=1;i<=N;i++) {
        if(scores[i]<=0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
