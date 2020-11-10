#include<bits/stdc++.h>
using namespace std;

int N;
int A[20];
int x[20][20];
int y[20][20];

int counter(int x) { // counts all the honest people in that combo
    if(x==0) return 0;
    return counter(x>>1) + (x&1);
}

void solve() {
    cin >> N;
    for(int i=1;i<=N;i++) {
        cin >> A[i];
        for(int j=1;j<=A[i];j++) {
            cin >> x[i][j] >> y[i][j];
        }
    }
    int ans = 0;
    for(int mask=1;mask<(1<<N);mask++) { // mask generates all possible combos
        bool ok = true;
        for(int i=1;i<=N;i++) {
            if((mask&(1<<(i-1)))) { // checks for set in mask
                for(int j=1;j<=A[i];j++) { // iterates over testimonies of that person
                    if(((mask >> (x[i][j]-1)) & 1) ^ y[i][j]) ok = false; // first part checks if in this combo that person is honest, second part checks if testimony says that person is honest
                }
            }
        }
        if(ok) ans = max(ans,counter(mask));
    }
    cout << ans << endl;
    return;
}

int main() {
    solve();
    return 0;
}
