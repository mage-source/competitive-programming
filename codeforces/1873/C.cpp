#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> target = {
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
  {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
  {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
  {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
  {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
  {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
  {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
  {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

int solve() {
  int points = 0;

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      char c;
      cin >> c;

      if (c == 'X') points += target[i][j];
    }
  }

  cout << points << endl;

  return 0;
}

int main() {
  int t;
  cin >> t;

  for (int tc = 0; tc < t; tc++) {
    solve();
  }

  return 0;
}
