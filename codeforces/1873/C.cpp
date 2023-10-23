#include <iostream>

using namespace std;

int solve() {
  vector<vector<char>> grid(10, vector<char>(10, '.'));
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> grid[i][j];
    }
  }

  int left = 0, right = 10, top = 0, bot = 10;
  int points = 0;
  int cur_ring = 1;

  while (left < right && top < bot) {
    int cur_points = 0;
    for (int i = left; i < right; i++) {
      if (grid[top][i] == 'X') points += cur_ring; cur_points++;
    }

    top++;

    for (int i = top; i < bot; i++) {
      if (grid[i][right - 1] == 'X') points += cur_ring; cur_points++;
    }

    right--;

    for (int i = right - 1; i >= left; i--) {
      if (grid[bot - 1][i] == 'X') points += cur_ring; cur_points++;
    }

    bot--;

    for (int i = bot - 1; i >= top; i--) {
      if (grid[i][left] == 'X') points += cur_ring; cur_points++;
    }

    left++;

    cur_ring++;
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
