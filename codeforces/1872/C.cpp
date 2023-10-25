#include <bits/stdc++.h>

using namespace std;

void solve() {
  int l, r;
  cin >> l >> r;

  for (int i = l; i <= r; i++) {
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        cout << j << " " << i - j << endl;
        return;
      }
    }
  }

  cout << -1 << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
