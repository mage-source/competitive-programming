#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;

  if (s.find('1') < s.find('3')) cout << "13\n";
  else cout << "31\n";

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
