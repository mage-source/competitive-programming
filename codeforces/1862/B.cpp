#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i]; 
  }

  vector<int> b;
  b.push_back(a[0]);

  for (int i = 1; i < n; i++) {
    if (b.back() > a[i]) {
      b.push_back(1);
    }
    b.push_back(a[i]);
  }

  cout << b.size() << endl;
  for (int i = 0; i < b.size(); i++) {
    cout << b[i] << " ";
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
