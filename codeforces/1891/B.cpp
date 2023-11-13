#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, q;

  cin >> n >> q;

  vector<int> a(n);
  vector<int> x(q);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < q; i++) {
    cin >> x[i];
    x[i] = 1 << x[i];
  }

  vector<int> p;
  int last = INT_MAX;
 
  for (int i = 0; i < q; i++) {
    if (x[i] < last) {
      last = x[i];
      p.push_back(x[i]);
    }
  }  

  for (int i = 0; i < n; i++) {
    for (int j : p) {
      if (a[i] % j == 0) {
        a[i] += (j >> 1);
      }
    }
  }

  for (int x : a) cout << x << " ";
  cout << '\n';

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
