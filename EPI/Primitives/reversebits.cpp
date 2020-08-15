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

long ReverseBits(long x) {
    const int kWordSize = 16;
    const int kBitMask = 0xFFFF;
    return precomputed_reverse[x & kBitMask] << (3 * kWordSize) |
           precomputed_reverse[(x >> kWordSize) & kBitMask] << (2 * kWordSize) |
           precomputed_reverse[(x >> (2 * kWordSize)) & kBitMask] << kWordSize |
           precomputed_reverse[(x >> (3 * kWordSize)) & kBitMask];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);
    
    long x;
    cin >> x;
    long ans = ReverseBits(x);
    cout << ans << endl;

    return 0;
}

// O(n/L) time - same analysis as the complexity for parity cache
// Starting from the LSB word size of x, we get its reverse by using a
// bitmask to get the correct index in the precomputed cache. After we
// have its correct reverse, we simply shift it to the MSB and append
// the rest of the reverses with the OR operator.
// Given words y1, y2, y3, y4
// we end up with rev(y4), rev(y3), rev(y2), rev(y1)

