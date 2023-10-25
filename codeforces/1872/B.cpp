#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> d(n);
  vector<int> s(n);

  for (int i = 0; i < n; i++) {
    cin >> d[i] >> s[i];
  }

  int mn = INT_MAX;

  for (int i = 0; i < n; i++) {
    int cr = floor((s[i] - 1) / 2) + d[i];
    mn = min(mn, cr);
  }

  cout << mn << endl;
}

int main() {
  int t;
  cin >> t;
  
  for (int i = 0; i < t; i++) {
    solve();
  }
}
