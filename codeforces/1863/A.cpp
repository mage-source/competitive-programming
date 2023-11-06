#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, a, q;
  cin >> n >> a >> q;

  string s;
  cin >> s;

  int p = 0;

  for (int i = 0; i < q; i++) {
    if (s[i] == '+') p++;
  }

  if (a + p < n) {
    cout << "NO\n";
    return;
  }

  if (a == n) {
    cout << "YES\n";
    return;
  }

  for (int i = 0; i < q; i++) {
    s[i] == '+' ? a++ : a--;
    if (a == n) {
      cout << "YES\n";
      return;
    }
  }

  cout << "MAYBE\n";

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
