#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  vector<int> pos(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    pos[a[i]] = i;
  }
  
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (pos[i] > pos[i + 1]) count++;
  }

  cout << count << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
