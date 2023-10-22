#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int tc = 0; tc < t; tc++) {
    int n;
    cin >> n;
    vector<pair<int, int>> athletes(n);
    for (int i = 0; i < n; i++) {
      cin >> athletes[i].first >> athletes[i].second;
    }

    int ow = athletes[0].first;
    int te = athletes[0].second;
    bool impossible = false;

    for (int i = 1; i < n; i++) {
      if (athletes[i].first >= ow && athletes[i].second >= te) {
        impossible = true;
      }
    }

    if (impossible) {
      cout << -1 << endl;
    } else {
      cout << ow << endl;
    }
  }
}

