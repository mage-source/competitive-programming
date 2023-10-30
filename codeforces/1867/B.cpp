#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int ans = 0;
  int max_2 = 0;
  int max_1 = 0;
  string t(n + 1, '0');

  for (int i = 0; i <= n/2 - 1; i++) {
    if (s[i] == s[n - i - 1]) max_2++;
    else ans++;
  }

  if (n % 2 == 1) max_1++;

  for (int i = 0; i <= max_2; i++) {
    for (int j = 0; j <= max_1; j++) {
      t[ans + (2 * i) + j] = '1';
    }
  }

  cout << t << "\n";

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
