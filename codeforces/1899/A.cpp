#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;

  int r = n % 3;

  if (r == 1 || r == 2) {
    cout << "First\n";
  } else {
    cout << "Second\n";
  }

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) solve();

  return 0;
}
