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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    unsigned long x = 16;
    const int kWordSize = 16;
    const int kBitMask = 0xFFFF;
    short ans =  precomputed_parity[x >> (3 * kWordSize)] ^
                 precomputed_parity[(x >> (2 * kWordSize)) & kBitMask] ^
                 precomputed_parity[(x >> kWordSize) & kBitMask] ^
                 precomputed_parity[x & kBitMask];

    cout << ans << endl;

    return 0;
}
// code just for reference, would take too long to build the 2^16 cache
// O(n/L) time - where n is the word size and L is the width of the words
// for which we cache the results.
// We are essentially searching the bits in n/L chunks which takes us to
// O(n/L) time.

