#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;

  int n = s.size();
  string a, b;

  for (int i = 0; i < 2 * n; i++) {
    a += "()"[i & 1];
    b += ")("[i < n];
  }

  if (a.find(s) == string::npos) {
    cout << "YES\n" << a << "\n";
  } else if (b.find(s) == string::npos) {
    cout << "YES\n" << b << "\n";
  } else {
    cout << "NO\n";
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
