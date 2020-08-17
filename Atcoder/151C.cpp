#include<iostream>
using namespace std;

int N,M;
int WA[105000]; // array storing # of incorrect, problem # is index
bool AC[105000]; // array to keep track of which problem # have been solved

void solve() {
    cin >> N >> M; // N problems and M submissions
    int WAnum = 0;
    int ACnum = 0;
    for(int i=1;i<=N;i++) { // initially setting everything
        WA[i] = 0;
        AC[i] = false;
    }
    while(M--) {
        int p;
        string S;
        cin >> p >> S; // taking inputs problem # and submission result
        if(AC[p]) continue; // if problem # has already been ACed then skip
        if(S=="AC") { // first time AC
            AC[p] = true;
            ACnum++;
            WAnum += WA[p];
        }
        else if(S=="WA") {
            WA[p]++;
        }
    }
    cout << ACnum << " " << WAnum << endl;
    return;
}

int main() {
    solve();
    return 0;
}
