#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<string> t(n);
  for (long long i = 0; i < n; i++) {
    cin >> t[i];
  }

  vector<vector<long long>> cnt = vector(6, vector<long long>(46, 0));

  for (string s : t) {
    long long ssum = 0;
    for (char c : s) {
      ssum += (c - '0');
    }
    cnt[s.size()][ssum]++;
  }

  long long res = 0;

  for (string L : t) {
    for (long long lenr = L.size() % 2; lenr <= L.size(); lenr += 2) {
      long long l = L.size() + lenr;
      long long suml = 0;
      for (long long i = 0; i < l / 2; i++) {
        suml += (L[i] - '0');
      }
      long long sumr = 0;
      for (long long i = l / 2; i < L.size(); i++) {
        sumr += (L[i] - '0');
      }
      if (suml - sumr > 0) res += cnt[lenr][suml - sumr];
    }
  }

  for (string R : t) {
    for (long long lenl = R.size() % 2; lenl < R.size(); lenl += 2) {
      long long l = lenl + R.size();
      long long sumr = 0;
      for (long long i = 0; i < l / 2; i++) {
        sumr += (R[R.size() - i - 1] - '0'); 
      }
      long long suml = 0;
      for (long long i = R.size() - (l / 2) - 1; i >= 0; i--) {
        suml += (R[i] - '0');
      }
      if (sumr - suml > 0) res += cnt[lenl][sumr - suml];
    }
  }

  cout << res << endl;

  return 0;
}
