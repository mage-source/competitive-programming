#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solve() {
  int n;
  cin >> n;
  vector<int> gifts(n);
  
  for (int i = 0; i < n; i++) {
    cin >> gifts[i];
  }
  
  sort(gifts.begin(), gifts.end());
  gifts[0]++;
  long long prod = 1;

  for (int i = 0; i < n; i++) {
    prod *= gifts[i];
  }

  cout << prod << endl;

  return 0;
}

int main() {
  int t;
  cin >> t;

  for (int tc = 0; tc < t; tc++) {
    solve();
  }
}
