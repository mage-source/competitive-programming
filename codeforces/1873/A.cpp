#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solve() {
  string cards;
  cin >> cards;

  bool flag = false;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      swap(cards[i], cards[j]);
      if (cards[0] == 'a' && cards[1] == 'b' && cards[2] == 'c') {
        flag = true; 
        break;
      }
      swap(cards[i], cards[j]);
    }
  }

  if (flag) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
