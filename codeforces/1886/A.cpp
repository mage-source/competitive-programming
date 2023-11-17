#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  for (int x = 1; x <= 2; x++) {
    for (int y = 2; y <= 5; y++) {
      if (x == y || x + y >= n) continue;
      int z = n - x - y;
      if (z == y || z == x) continue;
      if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) continue;
      cout << "YES" << endl;
      cout << x << " " << y << " " << z << endl;
      return;
    }
  }
  cout << "NO" << endl;
  return;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) solve();
  return 0;
}
