#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s;
  cin >> s;

  int n = s.size();
  int cost;
  
  if (s[0] == '0') {
    cost = 9;
  } else {
    cost = abs(1 - (s[0] - '0'));
  }

  for (int i = 0; i < n - 1; i++) {
    int src = s[i] == '0' ? 10 : s[i] - '0';
    int dst = s[i + 1] == '0' ? 10 : s[i + 1] - '0';
    cost += abs(src - dst); 
  }

  cout << 4 + cost << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) solve();

  return 0;
}
