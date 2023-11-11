#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x, y, k;
  cin >> x >> y >> k;

  if (y < x) {
    cout << x << endl;
  } else {
    cout << y + max(0, y - (x + k)) << endl;
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
