#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int tc = 0; tc < t; tc++) {
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    int i = 0;
    int ops = 0;
    int len = s.size();

    while (i < len) {
      if (s[i] == 'B') {
        ops++;
        i += k;
      } else {
        i++;
      }
    }

    cout << ops << endl;
  }

  return 0;
}
