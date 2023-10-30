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

  int min_cost = 0;
  
  for (int i = 0; i < sellers.size() && n > 0; i++) {
    int a = min(sellers[i].second, n); 
    min_cost += a * sellers[i].first;
    n -= a;
  }

  cout << min_cost << endl;

  return 0;
}
