#include <bits/stdc++.h>

using namespace std;

double dist(int x1, int y1, int x2, int y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

void solve() {
  int px, py, ax, ay, bx, by;
  cin >> px >> py >> ax >> ay >> bx >> by;
  double res = numeric_limits<double>::max();
  double oa = dist(0, 0, ax, ay), ob = dist(0, 0, bx, by);
  double pa = dist(px, py, ax, ay), pb = dist(px, py, bx, by);
  double ab = dist(ax, ay, bx, by);
  res = min(res, max(oa, pa));
  res = min(res, max(ob, pb));
  res = min(res, max({oa, pb, ab / 2}));
  res = min(res, max({ob, pa, ab / 2}));
  cout << setprecision(10) << fixed << res << endl;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) solve();
  return 0;
}
