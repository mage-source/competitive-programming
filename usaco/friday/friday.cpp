/*
ID: yiyuanh1
LANG: C++
TASK: friday
 */
#include <iostream>
#include <vector>

using namespace std;

int isleap(int y, int m, vector<int>& md) {
  if (m == 1) {
    return md[m] + (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
  } else {
    return md[m];
  }
}

int main() {
  freopen("friday.in", "r", stdin);
  freopen("friday.out", "w", stdout);

  int n;
  cin >> n;
  vector<int> w(7, 0);
  vector<int> md = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  
  int dow = 0;
  for (int y = 1900; y < 1900 + n; y++) {
    for (int m = 0; m < 12; m++) {
      w[dow]++;
      dow = (dow + isleap(y, m, md)) % 7;
    }
  }

  for (int i = 0; i < 6; i++) {
    cout << w[i] << " ";
  }
  cout << w[6] << "\n";

  return 0;
}
