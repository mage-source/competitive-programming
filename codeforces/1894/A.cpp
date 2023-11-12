#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<char> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }  

  cout << a[a.size() - 1] << '\n';

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
