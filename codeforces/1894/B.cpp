#include <bits/stdc++.h>

using namespace std;

const int MX = 100;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<int> b(n, 1);
  vector<vector<int>> idxs(MX + 1);

  for (int i = 0; i < n; i++) {
    idxs[a[i]].push_back(i);
  }

  int k = 2;

  for (int x = 1; x <= MX; x++) {
    if (idxs[x].size() >= 2) {
      b[idxs[x][0]] = k;
      k++;
      if (k > 3) break;
    }
  }

  if (k <= 3) {
    cout << "-1\n";
  } else {
    for (int x : b) cout << x << " ";
    cout << '\n';
  }
 
  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
