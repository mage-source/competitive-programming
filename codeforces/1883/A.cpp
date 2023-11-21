#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> costs = {
  {0, 9, 8, 7, 6, 5, 4, 3, 2, 1},
  {9, 0, 1, 2, 3, 4, 5, 6, 7, 8},
  {8, 1, 0, 1, 2, 3, 4, 5, 6, 7},
  {7, 2, 1, 0, 1, 2, 3, 4, 5, 6},
  {6, 3, 2, 1, 0, 1, 2, 3, 4, 5},
  {5, 4, 3, 2, 1, 0, 1, 2, 3, 4},
  {4, 5, 4, 3, 2, 1, 0, 1, 2, 3},
  {3, 6, 5, 4, 3, 2, 1, 0, 1, 2},
  {2, 7, 6, 5, 4, 3, 2, 1, 0, 1},
  {1, 8, 7, 6, 5, 4, 3, 2, 1, 0}
};

void solve() {
  string s;
  cin >> s;

  int n = s.size();
  int init_cost = costs[1][s[0] - '0'];
  int move_cost = 0;

  for (int i = 0; i < n - 1; i++) {
    int src = s[i] - '0';
    int dst = s[i + 1] - '0';
    move_cost += costs[src][dst];
  }

  cout << 4 + init_cost + move_cost << endl;

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) solve();

  return 0;
}
