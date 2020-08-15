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

    unsigned long x = 3;
    short result = 0; 
    while(x) {
        result ^= 1;
        x &= (x-1); // Drops the lowest set bit of x.
    }
    cout << result << endl;

    return 0;
}

// O(k) where k is the number of set bits

