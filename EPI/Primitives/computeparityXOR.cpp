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

short Parity(unsigned long x) {
    x ^= x >> 32;
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 0x1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    unsigned long x;
    cin >> x;
    short ans = Parity(x);
    cout << ans << endl;

    return 0;
}

// O(logn) time
// This method exploits the CPU's word level XOR instruction to process
// multiple bits at a time. Also takes advantage of the fact that XOR
// is both associative and commutative.
// In other words, we find the parity of each word size through the use
// of the CPU's word level XOR and then do a final check of parity to get
// the desired answer
