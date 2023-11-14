#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  unordered_map<int, int> mp;
  for (int x : a) {
    mp[x]++;
  }

  bool ok = false;

  if (mp.size() == 1) ok = true;
  if (mp.size() == 2) {
    for (const auto &it : mp) {
      if (it.second == floor(a.size() / 2)) ok = true;
    }
  }

  if (ok) {
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
