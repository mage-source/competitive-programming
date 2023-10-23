/*
ID: yiyuanh1
LANG: C++
TASK: beads
 */
#include <iostream>

using namespace std;

int mod(int n, int m) {
  while (n < 0) {
    n += m;
  }

  return n % m;
}

int nbreak(int pos, int dir, string& beads) {
  char color = 'w';
  int len = beads.size();
  int cur_idx = 0;
  if (dir > 0) {
    cur_idx = pos;
  } else {
    cur_idx = mod(pos - 1, len);
  }

  int collect;
  for (collect = 0; collect < len; collect++, cur_idx = mod(cur_idx + dir, len)) {
    if (color == 'w' && beads[cur_idx] != 'w') color = beads[cur_idx];
    
    if (beads[cur_idx] != 'w' && beads[cur_idx] != color) break;
  }

  return collect;
}

int main() {
  freopen("beads.in", "r", stdin);
  freopen("beads.out", "w", stdout);

  int n;
  cin >> n;

  string beads;
  cin >> beads;
  int len = beads.size();
  int max_length = 0;

  for (int i = 0; i < len; i++) {
    int cur_length = nbreak(i, 1, beads) + nbreak(i, -1, beads);
    max_length = max(max_length, cur_length);
  }

  max_length = min(max_length, len);

  cout << max_length << endl;

  return 0;
}
