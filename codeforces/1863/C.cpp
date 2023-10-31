#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  vector<long long> a(n + 1);
  long long a_sum = 0;
  for (long long i = 0; i < n; i++) {
    cin >> a[i];
    a_sum += a[i];
  }
  
  long long natural_sum = (n * (n + 1)) / 2;
  a[n] = natural_sum - a_sum;
  long long shift = k % (n + 1);

  reverse(a.begin(), a.end());
  reverse(a.begin(), a.begin() + shift);
  reverse(a.begin() + shift, a.end());

  for (long long i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << '\n';

  return;
}

int main() {
  long long t;
  cin >> t;

  for (long long i = 0; i < t; i++) {
    solve();
  }
}
