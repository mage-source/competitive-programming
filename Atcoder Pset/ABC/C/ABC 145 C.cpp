#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int N;
int x[10],y[10];

double dist(int i,int j) {
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow(dx*dx+dy*dy,0.5);
}

void solve() {
    double sum = 0.0;
    int factorial = 1;
    cin >> N;
    for(int i=1;i<=N;i++) {
        cin >> x[i] >> y[i];
    }
    vector<int> v(N);
    for(int i=0;i<N;i++) {
        v[i] = i + 1;
    }
    do {
        for(int i=0;i<N-1;i++) {
            sum += dist(v[i],v[i+1]);
        }
    } while(next_permutation(v.begin(),v.end()));
    for(int i=2;i<=N;i++) {
        factorial *= i;
    }
    cout << fixed << setprecision(10) << sum/factorial << endl;
    return;
}

int main() {
    solve();
    return 0;
}








