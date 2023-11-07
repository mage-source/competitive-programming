#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long n;
  cin >> n;

  vector<vector<long long>> a(n, vector<long long>());
  for (long long i = 0; i < n; i++) {
    long long m;
    cin >> m;
    for (long long j = 0; j < m; j++) {
      long long x;
      cin >> x;
      a[i].push_back(x);
    }
  }

  long long M = INT_MAX;
  long long S = INT_MAX;
  long long K = 0;
  
  for (long long i = 0; i < n; i++) {
    sort(a[i].begin(), a[i].end());
  }
  
  for (long long i = 0; i < n; i++) {
    M = min(M, a[i][0]);
    S = min(S, a[i][1]);
    K += a[i][1];
  }

  cout << M + K - S << endl;

  return;
}

int main() {
  long long t;
  cin >> t;

  for (long long i = 0; i < t; i++) {
    solve();
  }
}
