#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int min_dist = INT_MAX;

  for (int i = 0; i < n; i++) {
    int dist;
    cin >> dist;
    min_dist = min(min_dist, abs(dist));
  }

  cout << min_dist << endl;

  return 0;
}
