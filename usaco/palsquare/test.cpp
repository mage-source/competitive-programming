#include <bits/stdc++.h>

using namespace std;

int main() {
  string test1 = "Michael";
  string test2 = "Michael";

  cout << "Testing using begin() and end():" << endl;
  string reverse_test1(test1.begin(), test1.end());
  cout << test1 << endl;
  cout << reverse_test1 << endl;

  cout << "Testing using rbegin() and rend():" << endl;
  string reverse_test2(test2.rbegin(), test2.rend());
  cout << test2 << endl;
  cout << reverse_test2 << endl;

  return 0;
}
