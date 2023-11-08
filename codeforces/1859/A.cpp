#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  bool check = false;

  for (int i = 0; i < n - 1; i++) {
    if (a[i] != a[i + 1]) {
      check = true;
      break;
    }
  }

  if (!check) {
    cout << "-1\n";
    return;
  }

  int m = *min_element(a.begin(), a.end());
  vector<int> b;
  vector<int> c;
  
  for (int i = 0; i < n; i++) {
    if (a[i] == m) {
      b.push_back(a[i]);
    } else {
      c.push_back(a[i]);
    }
  }

  cout << b.size() << " " << c.size() << endl;

  for (int x : b) {
    cout << x << " ";
  }
  cout << endl;

  for (int x : c) {
    cout << x << " ";
  }
  cout << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
