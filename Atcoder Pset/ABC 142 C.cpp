#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N+1);
    for(int i=1;i<=N;i++) {
        cin >> A[i];
    }
    vector<int> rev(N+1);
    for(int i=1;i<=N;i++) {
        rev[A[i]] = i;
    }
    for(int i=1;i<=N;i++) {
        cout << rev[i] << " ";
    }
    return 0;
}
