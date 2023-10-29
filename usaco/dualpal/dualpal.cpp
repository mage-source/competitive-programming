/*
ID: yiyuanh1
LANG: C++
TASK: dualpal
 */
#include <bits/stdc++.h>

using namespace std;

const string numbers = "0123456789";

string convert(int num, int base) {
  string result = "";

  while (num > 0) {
    int remainder = num % base;
    result += numbers[remainder];
    num /= base;
  }

  reverse(result.begin(), result.end());

  return result;
}

int main() {
  freopen("dualpal.in", "r", stdin);
  freopen("dualpal.out", "w", stdout);

  int n, s;
  cin >> n >> s;
  s++;
  
  while (n > 0) {
    bool flag = false;
    for (int base = 2; base <= 10; base++) {
      string converted = convert(s, base);
      string reversed(converted.rbegin(), converted.rend());

      if (converted == reversed) {
        if (flag) {
          cout << s << endl;
          n--;
          break;
        } else {
          flag = true;
        }
      }
    }
    s++;
  }

  return 0;
}
