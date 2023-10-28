#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long n, k, a, b;
  cin >> n >> k >> a >> b;

  vector<long long> x(n + 1);
  vector<long long> y(n + 1);

  for (int i = 1; i <= n; i++) {
    cin >> x[i] >> y[i];
  }

  long long A = LLONG_MAX / 2; 
  long long B = LLONG_MAX / 2;
  long long min_cost = llabs(x[a] - x[b]) + llabs(y[a] - y[b]);

  for (int i = 1; i <= k; i++) {
    A = min(A, llabs(x[a] - x[i]) + llabs(y[a] - y[i]));
    B = min(B, llabs(x[i] - x[b]) + llabs(y[i] - y[b]));
  }

  min_cost = min(min_cost, A + B);

  cout << min_cost << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
