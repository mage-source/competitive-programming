#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  long long t;
  cin >> t;
  
  for (long long i = 0; i < t; i++) {
    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    for (long long j = 0; j < n; j++) cin >> a[j];
    for (long long j = 0; j < n; j++) cin >> b[j];

    long long min_a = *min_element(a.begin(), a.end());
    long long min_b = *min_element(b.begin(), b.end());

    long long sum_a = accumulate(a.begin(), a.end(), 0LL);
    long long sum_b = accumulate(b.begin(), b.end(), 0LL);

    long long min_cost = min(min_a * n + sum_b, min_b * n + sum_a);

    cout << min_cost << endl;
  }

  return 0;
}
