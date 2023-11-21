#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int mx = 0;
  int cnt_evens = 0;

  for (int x : a) {
    if (x % k != 0) {
      mx = max(mx, x % k);
    } else {
      cout << "0\n";
      return;
    }
    cnt_evens += (x % 2 == 0);
  }

  if (k == 4) {
    int t = max(0, 2 - cnt_evens);
    cout << min(k - mx, t) << endl;
  } else {
    cout << k - mx << endl;
  }

  return;
}

int main() {
  int t;
  cin >> t;
  
  for (int i = 0; i < t; i++) solve();

  return 0;
}
