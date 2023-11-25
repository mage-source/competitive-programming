#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  long long ans = -1;

  for (int k = 1; k <= n; k++) {
    if (n % k == 0) {
      long long mx = numeric_limits<long long>::min();
      long long mn = numeric_limits<long long>::max();
      for (int i = 0; i < n; i += k) {
        long long sm = 0;
        for (int j = i; j < i + k; j++) {
          sm += a[j];
        }
        mx = max(mx, sm);
        mn = min(mn, sm);
      }
      ans = max(ans, mx - mn);
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
