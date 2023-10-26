/*
ID: yiyuanh1
LANG: C++
TASK: namenum
 */
#include <bits/stdc++.h>

using namespace std;


int main() {
  freopen("namenum.in", "r", stdin);
  freopen("namenum.out", "w", stdout);

  string target_id;
  cin >> target_id;

  unordered_map<char, char> map;
  
  map['A'] = map['B'] = map['C'] = '2';
  map['D'] = map['E'] = map['F'] = '3';
  map['G'] = map['H'] = map['I'] = '4';
  map['J'] = map['K'] = map['L'] = '5';
  map['M'] = map['N'] = map['O'] = '6';
  map['P'] = map['R'] = map['S'] = '7';
  map['T'] = map['U'] = map['V'] = '8';
  map['W'] = map['X'] = map['Y'] = '9';

  ifstream dict("dict.txt");
  string name;
  bool flag = false;
  while (getline(dict, name)) {
    vector<char> name_id_arr;
    for (int i = 0; i < name.size(); i++) {
      name_id_arr.push_back(map[name[i]]);
    }
    string name_id(name_id_arr.begin(), name_id_arr.end());
    if (name_id == target_id) {
      cout << name << endl;
      flag = true;
    }
  }

  if (!flag) cout << "NONE" << endl;

  return 0;
}
