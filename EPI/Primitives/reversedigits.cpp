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

long Reverse(int x) {
    long result = 0, x_remaining = abs(x);
    while(x_remaining) {
        result = result * 10 + x_remaining % 10;
        x_remaining /= 10;
    }
    return x < 0 ? -result : result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    // reverse an integer
    int x;
    cin >> x;
    
    long answer = Reverse(x);
    cout << answer << endl;

    return 0;
}

