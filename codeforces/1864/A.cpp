#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x, y, n;
  cin >> x >> y >> n;

  vector<int> arr(n);

  arr[0] = x;
  arr[n - 1] = y;
  int delta = 1;

  for (int i = n - 2; i >= 1; i--) {
    arr[i] = arr[i + 1] - delta;
    delta++;
  }

  bool ok = true;

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] >= arr[i + 1]) {
      ok = false;
      break;
    }
  }

  for (int i = 0; i < n - 2; i++) {
    int p = arr[i + 1] - arr[i];
    int q = arr[i + 2] - arr[i + 1];
    if (p <= q) {
      ok = false;
      break;
    }
  }

  if (!ok) {
    cout << "-1\n";
  } else {
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  
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
