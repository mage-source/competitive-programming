#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
  int n;
  cin >> n;
  vector<pair<ll, ll>> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i].first;
    arr[i].second = i;
  }

  sort(arr.begin(), arr.end());
  reverse(arr.begin(), arr.end());
  vector<ll> res(n);

  for (int i = 0; i < n; i++) {
    res[arr[i].second] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << res[i] << " ";
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
