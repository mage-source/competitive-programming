#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<char> odd, even;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) even.push_back(s[i]);
    else odd.push_back(s[i]);
  }

  if (k % 2 == 0) {
    sort(s.begin(), s.end());
    cout << s << endl;
    return;
  }

  sort(odd.begin(), odd.end());
  sort(even.begin(), even.end());

  string merged = "";

  for (int i = 0, j = 0; i < odd.size() || j < even.size(); i++, j++) {
    if (j < even.size()) merged += even[j];
    if (i < odd.size()) merged += odd[i];
  }

  cout << merged << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
