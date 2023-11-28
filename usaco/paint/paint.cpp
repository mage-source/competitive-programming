#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);

  vector<pair<int, int>> intervals;

  for (int i = 0; i < 2; i ++) {
    pair<int, int> p;
    cin >> p.first >> p.second;
    intervals.push_back(p);
  }

  sort(intervals.begin(), intervals.end());

  vector<pair<int, int>> merged;
  merged.push_back(intervals[0]);

  if (intervals[1].first <= merged[0].second) {
    merged[0].first = min(merged[0].first, intervals[1].first);
    merged[0].second = max(merged[0].second, intervals[1].second);
  } else {
    merged.push_back(intervals[1]);
  }

  int res = 0;

  for (int i = 0; i < merged.size(); i++) {
    res += merged[i].second - merged[i].first;
  }

  cout << res << endl;

  return 0;
}
