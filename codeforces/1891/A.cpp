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
  for (int i = 0; i < n - 1; i++) {
    b.push_back(a[i + 1] - a[i]);
  }

  unordered_set<int> powers_of_two= {1, 2, 4, 8, 16};
  for (int i = 0; i < b.size(); i++) {
    if (powers_of_two.find(i + 1) == powers_of_two.end() && b[i] < 0) {
      cout << "NO\n";
      return;
    } 
  }

  cout << "YES\n";
  return;
}

int main() {
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    solve();
  }
}
