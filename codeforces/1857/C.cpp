#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; 
  cin >> n;
  int m = (n * (n - 1)) / 2;
  vector<int> b(m);
  for (int i = 0; i < m; i++) cin >> b[i];
  sort(b.begin(), b.end());
  for (int i = 0; i < m; i += n) {
    cout << b[i] << " ";
    n--;
  }
  cout << "1000000000\n";
  return;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }
}
