#include <bits/stdc++.h>

using namespace std;

int sum_digits(int x) {
  int sum = 0;
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}

void solve() {
  int x, k;
  cin >> x >> k;
  while (sum_digits(x) % k != 0) {
    x++;
  }
  cout << x << endl;
  return;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) solve();
  return 0;
}
