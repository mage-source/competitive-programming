/*
ID: yiyuanh1
LANG: C++
TASK: gift1 
*/
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  freopen("gift1.in", "r", stdin);
  freopen("gift1.out", "w", stdout);

  unordered_map<string, int> amts;
  int n;
  cin >> n;

  vector<string> names(n);
  
  for (int i = 0; i < n; i++) {
    cin >> names[i];
    amts[names[i]] = 0;
  }

  for (int i = 0; i < n; i++) {
    string giver_name;
    int total, split;
    cin >> giver_name;
    cin >> total >> split;

    amts[giver_name] -= total;

    int remainder = 0, split_amt = 0;
    
    if (split != 0) {
      remainder = total % split;
      split_amt = total / split;
    }

    if (remainder != 0) {
      amts[giver_name] += remainder;
    }

    for (int j = 0; j < split; j++) {
      string receiver_name;
      cin >> receiver_name;
      amts[receiver_name] += split_amt;
    }
  }

  for (int i = 0; i < names.size(); i++) {
    cout << names[i] << " " << amts[names[i]] << endl;
  }

  return 0;
}
