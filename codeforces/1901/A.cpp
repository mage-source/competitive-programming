#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int res = max(a[0], 2 * (x - a.back()));

  for (int i = 0; i < n - 1; i++) {
    res = max(res, a[i + 1] - a[i]); 
  }

  cout << res << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
