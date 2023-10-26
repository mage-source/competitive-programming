#include <bits/stdc++.h>

using namespace std;

void solve() {
  double a, b, c;
  cin >> a >> b >> c;
  
  int res = ceil(abs(a - b) / (2 * c));

  cout << res << endl;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
