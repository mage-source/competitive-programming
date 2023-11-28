#include <bits/stdc++.h>

using namespace std;

int main() {
  int s, v1, v2, t1, t2;
  cin >> s >> v1 >> v2 >> t1 >> t2;

  int first_time = (v1 * s) + (2 * t1);
  int second_time = (v2 * s) + (2 * t2);

  if (first_time < second_time) {
    cout << "First" << endl;
  } else if (second_time < first_time) {
    cout << "Second" << endl;
  } else {
    cout << "Friendship" << endl;
  }

  return 0;
}
