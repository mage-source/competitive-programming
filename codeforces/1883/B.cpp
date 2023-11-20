#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  unordered_map<char, int> mp;

  for (char c : s) {
    mp[c]++;
  }

  int cnt_odds = 0;

  for (const auto& it : mp) {
    if (it.second % 2 == 1) cnt_odds++; 
  }

  if (cnt_odds > k + 1) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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
