/*
ID: yiyuanh1
LANG: C++
TASK: milk
 */
#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("milk.in", "r", stdin);
  freopen("milk.out", "w", stdout);

  int n, m;
  cin >> n >> m;

  vector<pair<int, int>> sellers(m);

  for (int i = 0; i < m; i++) {
    cin >> sellers[i].first >> sellers[i].second;
  }

  sort(sellers.begin(), sellers.end());

  int i = 0;
  int min_cost = 0;

  while (n > 0 && i < sellers.size()) {
    while (sellers[i].second > 0 && n > 0) {
      n--;
      sellers[i].second--;
      min_cost += sellers[i].first;
    }
    i++;
  }

  cout << min_cost << endl;

  return 0;
}
