#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(2 * n);

  for (int i = 0; i < 2 * n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  cout << (a[n - 1] - a[0]) + (a[2 * n - 1] - a[n]) << endl;

  for (int i = 0; i < n; i++) {
    cout << a[i] << " " << a[i + n] << endl;
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
