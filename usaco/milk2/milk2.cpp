/*
ID: yiyuanh1
LANG: C++
TASK: milk2
*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  freopen("milk2.in", "r", stdin);
  freopen("milk2.out", "w", stdout);

  int n;
  cin >> n;

  vector<pair<int, int>> intervals;

  for (int i = 0; i < n; i++) {
    pair<int, int> p;
    cin >> p.first >> p.second;
    intervals.push_back(p);
  }

  sort(intervals.begin(), intervals.end());

  vector<pair<int, int>> merged_intervals;
  merged_intervals.push_back(intervals[0]);

  for (int i = 1; i < intervals.size(); i++) {
    auto cur_interval = intervals[i];
    if (cur_interval.first <= merged_intervals.back().second) {
      merged_intervals.back().first = min(merged_intervals.back().first, cur_interval.first);
      merged_intervals.back().second = max(merged_intervals.back().second, cur_interval.second);
    } else {
      merged_intervals.push_back(cur_interval);
    }
  }

  vector<pair<int, int>> anti_intervals;

  for (int i = 0; i < merged_intervals.size() - 1; i++) {
    pair<int, int> new_interval;
    new_interval.first = merged_intervals[i].second;
    new_interval.second = merged_intervals[i + 1].first;
    anti_intervals.push_back(new_interval);
  }

  int max_milk_interval = 0;

  for (auto it : merged_intervals) {
    max_milk_interval = max(max_milk_interval, it.second - it.first);
  }

  int max_nomilk_interval = 0;

  for (auto it : anti_intervals) {
    max_nomilk_interval = max(max_nomilk_interval, it.second - it.first);
  }

  cout << max_milk_interval << " " << max_nomilk_interval << endl;

  return 0;
}
