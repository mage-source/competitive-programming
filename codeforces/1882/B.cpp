#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int x;
      cin >> x;
      a[i] |= (1ll << x);
    }
  }
  long long S = 0;
  for (int i = 0; i < n; i++) S |= a[i];
  int ans = 0;
  for (int i = 1; i <= 50; i++) {
    if (S & (1ll << i)) {
      long long cur = 0;
      for (int j = 0; j < n; j++) {
        if ((a[j] & (1ll << i)) == 0) {
          cur |= a[j];
        }
      }
      ans = max(ans, __builtin_popcountll(cur));
    }
  }
  cout << ans << endl;
  return;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) solve();
  return 0;
}
