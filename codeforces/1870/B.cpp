#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  vector<int> b(m);
  
  int xor_a = 0; 
  int or_b = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    xor_a ^= a[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> b[i];
    or_b |= b[i];
  }

  int z = 0;

  for (int i = 0; i < n; i++) {
    z ^= a[i] | or_b;
  }

  if (n % 2 == 0) {
    cout << z << " " << xor_a << endl;
  } else {
    cout << xor_a << " " << z << endl;
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
