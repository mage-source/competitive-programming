#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int odd_cnt = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 1) odd_cnt++;
  }

  if (odd_cnt % 2 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
