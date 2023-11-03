#include <bits/stdc++.h>

using namespace std;

void solve() {
  string a, b;
  cin >> a >> b;

  int n = a.size();
  for (int i = 0; i < n - 1; i++) {
    if ((a[i] == '0' && a[i] == b[i]) && 
        (a[i + 1] == '1' && a[i + 1] == b[i + 1])) {
      cout << "YES" << endl;
      return;
    }
  }

  cout << "NO" << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
