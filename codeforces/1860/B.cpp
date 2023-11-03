#include <bits/stdc++.h>

using namespace std;

void solve() {
  int m, k, a1, ak;
  cin >> m >> k >> a1 >> ak;

  int taken_k = m / k;
  int taken_1 = m % k;
  int leftover_regular_1 = max(0, a1 - taken_1);
  int taken_fancy_1 = max(0, taken_1 - a1);
  int taken_fancy_k = max(0, taken_k - ak);
  int replacements = min(leftover_regular_1 / k, taken_fancy_k);
  int result = taken_fancy_k + taken_fancy_1 - replacements;
  cout << result << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
