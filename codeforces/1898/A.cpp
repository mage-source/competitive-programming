#include <iostream>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;

  int tb = 0;
  for (int i = 0; i < s.size(); i++) tb += (s[i] == 'B');

  if (tb == k) {
    cout << "0" << endl;
  } else if (tb < k) {
    int cb = 0;
    for (int i = 0; i < s.size(); i++) {
      cb += (s[i] == 'B');
      if (i + 1 + (tb - cb) == k) {
        cout << "1\n" << i + 1 << " B" << endl;
        break;
      }
    }
  } else {
    int cb = 0;
    for (int i = 0; i < s.size(); i++) {
      cb += (s[i] == 'B');
      if (tb - cb == k) {
        cout << "1\n" << i + 1 << " A" << endl;
        break;
      }
    }
  }

  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) solve();

  return 0;
}
