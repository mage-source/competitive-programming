#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#include <climits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <numeric>
#include <string> 
#include <vector>

typedef long long ll;

using namespace std;

bool isPalindrome(int x) {
    if(x < 0) {
        return false;
    }

    const int num_digits = static_cast<int>(floor(log10(x))) + 1;
    int msd_mask = static_cast<int>(pow(10, num_digits - 1));
    for(int i = 0; i < (num_digits / 2); ++i) {
        if(x / msd_mask != x % 10) {
            return false;
        }
        x %= msd_mask; // Remove the most significant digit of x
        x /= 10; // Remove the least significant digit of x
        msd_mask /= 100; // Removed two digits
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    int x;
    cin >> x;

    bool ans = isPalindrome(x);

    if(ans) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

// O(n) time 
// O(1) space
