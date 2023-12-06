#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long res = a[0] - 1;

  for (int i = 0; i < n - 1; i++) {
    if (a[i] < a[i + 1]) {
      res += a[i + 1] - a[i];
    }
  }

  cout << res << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }

  return 0;
}
