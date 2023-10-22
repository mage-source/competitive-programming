#include <iostream>
#include <vector>

using namespace std;

bool valid(long long max_water, long long mid, vector<long long>& col_heights) {
  long long water_needed = 0;

  for (long long i = 0; i < col_heights.size(); i++) {
    if (mid > col_heights[i]) {
      water_needed += mid - col_heights[i];
    }
  }

  return ( water_needed <= max_water );
}

int main() {
  long long t;
  cin >> t;

  for (long long tc = 0; tc < t; tc++) {
    long long n, x;
    cin >> n >> x;

    vector<long long> col_heights(n, 0);

    for (long long i = 0; i < n; i++) {
      cin >> col_heights[i];
    }

    long long h = 0;
    long long lower = 1;
    long long upper = 10e9;
    while (lower <= upper) {
      long long mid = lower + (upper - lower) / 2;
      if (valid(x, mid, col_heights)) {
        lower = mid + 1;
        h = mid;
      } else {
        upper = mid - 1;
      }
    }

    cout << h << endl;
  }
    
  return 0;
}
