/*
ID: yiyuanh1
LANG: C++
TASK: ride
*/
#include <bits/stdc++.h>

using namespace std;

int get_prod(string s) {
  int prod = 1;
  for (int i = 0; i < s.length(); i++) {
    int num = s[i] - 64;
    prod *= num;
  }
  return prod % 47;
}

int main() {
  freopen("ride.in", "r", stdin);
  freopen("ride.out", "w", stdout);

  string s;
  string t;

  cin >> s >> t;

  int s_prod = get_prod(s);
  int t_prod = get_prod(t);

  if (s_prod == t_prod) {
    cout << "GO" << endl;
  } else {
    cout << "STAY" << endl;
  }

  return 0;
}
