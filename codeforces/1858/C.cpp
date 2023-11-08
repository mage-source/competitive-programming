#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  int cur = 0;

  for (int i = 1; i <= n; i += 2) {
    for (int j = i; j <= n; j *= 2) {
      a[cur++] = j;
    }
  }

  for (int x : a) {
    cout << x << " ";
  }

  cout << "\n";

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
