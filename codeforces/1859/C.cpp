#include <bits/stdc++.h>

using namespace std;

vector<int> reverse_suffix(vector<int> a, int start) {
  int left = start;
  int right = a.size() - 1;

  while (left < right) {
    swap(a[left], a[right]);
    left++;
    right--;
  }

  return a;
}

int compute_score(vector<int> a) {
  int mx = 0;
  int score = 0;

  for (int i = 0; i < a.size(); i++) {
    int term = a[i] * (i + 1);
    score += term;
    mx = max(mx, term);
  }

  return score - mx;
}

void solve() {
  int n;
  cin >> n;

  vector<int> p(n);

  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }
  
  int max_score = 0;

  for (int i = 0; i < n; i++) {
    vector<int> rs = reverse_suffix(p, i);
    int cur_score = compute_score(rs);
    max_score = max(max_score, cur_score);
  }
  
  cout << max_score << "\n";
  
  return;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}
