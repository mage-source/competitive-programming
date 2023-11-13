#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;

  bool s_alt = true;

  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) s_alt = false;
  }

  bool flag = false;

  if (s_alt) {
    flag = true;
  } else {
    bool t_alt = true;

    for (int i = 0; i < m - 1; i++) {
      if (t[i] == t[i + 1]) t_alt = false;
    }

    if (t_alt && t[0] == t[m - 1] && s.find({t[0], t[m - 1]}) == string::npos) {
      flag = true;
    } 
  }

  if (flag) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
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
