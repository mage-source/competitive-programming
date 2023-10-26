#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long n, x, y;
  cin >> n >> x >> y;

  long long R = floor(n/x) - floor(n/lcm(x, y));
  long long B = floor(n/y) - floor(n/lcm(x, y));
  long long R_sum = (2*R*n - pow(R, 2) + R) / 2;
  long long B_sum = (pow(B, 2) + B) / 2;

  cout << R_sum - B_sum << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
