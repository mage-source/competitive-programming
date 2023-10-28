/*
ID: yiyuanh1
LANG: C++
TASK: palsquare
 */
#include <bits/stdc++.h>

using namespace std;

const string numbers = "0123456789ABCDEFGHIJK";

string convert(int input, int b) {
  string result = "";
  while (input > 0) {
    int remainder = input % b;
    result += numbers[remainder];
    input /= b;
  }
  reverse(result.begin(), result.end());
  return result;
}  

int main() {
  freopen("palsquare.in", "r", stdin);
  freopen("palsquare.out", "w", stdout);

  int base; 
  cin >> base;

  for (int i = 1; i <= 300; i++) {
    int s = i * i;
    string square = convert(s, base);
    string iterate = convert(i, base);
    string reverse(square.rbegin(), square.rend());
    if (reverse == square) cout << iterate << " " << square << endl;
  }

  return 0;
}
