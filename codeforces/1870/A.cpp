#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k, x;
  cin >> n >> k >> x;

  if (k > n || k > x + 1)  {
    cout << "-1\n";
    return;
  }

  int max_sum = 0;

  for (int i = 0; i < k; i++) {
    max_sum += i;
  }

  for (int i = 0; i < n - k; i++) {
    if (k == x) {
      max_sum += x - 1;
    } else {
      max_sum += x;
    }
  }

  cout << max_sum << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
