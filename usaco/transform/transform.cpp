/*
ID: yiyuanh1
LANG: C++
TASK: transform
 */
#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> rotate(vector<vector<char>> grid) {
  int n = grid.size();
  vector<vector<char>> res(n, vector<char>(n, '.'));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      res[j][n - i - 1] = grid[i][j];
    }
  }

  return res;
}

vector<vector<char>> reflect(vector<vector<char>> grid) {
  int n = grid.size();
  vector<vector<char>> res(n, vector<char>(n, '.'));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      res[i][n - j - 1] = grid[i][j];
    }
  }

  return res;
}

bool is_equal(vector<vector<char>> a, vector<vector<char>> b) {
  int n = a.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][j] != b[i][j]) return false;
    }
  }

  return true;
}

vector<vector<char>> op_1(vector<vector<char>> grid) {
  return rotate(grid);
}

vector<vector<char>> op_2(vector<vector<char>> grid) {
  return rotate(rotate(grid));
}

vector<vector<char>> op_3(vector<vector<char>> grid) {
  return rotate(rotate(rotate(grid)));
}

vector<vector<char>> op_4(vector<vector<char>> grid) {
  return reflect(grid);
}

vector<vector<char>> op_5a(vector<vector<char>> grid) {
  return op_4(op_1(grid));
}

vector<vector<char>> op_5b(vector<vector<char>> grid) {
  return op_4(op_2(grid));
}

vector<vector<char>> op_5c(vector<vector<char>> grid) {
  return op_4(op_3(grid));
}

int main() {
  freopen("transform.in", "r", stdin);
  freopen("transform.out", "w", stdout);

  int n;
  cin >> n;

  vector<vector<char>> grid(n, vector<char>(n, '.'));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  vector<vector<char>> target(n, vector<char>(n, '.'));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> target[i][j];
    }
  }

  if (is_equal(target, op_1(grid))) {
    cout << "1" << endl;
  } else if (is_equal(target, op_2(grid))) {
    cout << "2" << endl;
  } else if (is_equal(target, op_3(grid))) {
    cout << "3" << endl;
  } else if (is_equal(target, op_4(grid))) {
    cout << "4" << endl;
  } else if (is_equal(target, op_5a(grid)) || 
             is_equal(target, op_5b(grid)) ||
             is_equal(target, op_5c(grid))) {
    cout << "5" << endl;
  } else if (is_equal(target, grid)) {
    cout << "6" << endl;
  } else {
    cout << "7" << endl;
  }

  return 0;
}
