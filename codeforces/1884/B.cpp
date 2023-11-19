#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;

  int zero = 0;

  for (char c : s) zero += (c == '0');

  long long sum_ones = 0;
  long long sum_zeros = 0;

  reverse(s.begin(), s.end());
  int j = 0;

  for (int i = 0; i < n; i++) {
    if (i + 1 > zero) {
      cout << "-1 ";
      continue;
    }

    sum_ones += i;
    
    while (j < n && s[j] != '0') {
      j++;
    }

    sum_zeros += j;
    j++;

    cout << sum_zeros - sum_ones << " ";
  }

  cout << endl;

  return;
}

int main() {
  int t; cin >> t;

  for (int i = 0; i < t; i++) solve();

  return 0;
}
