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

double Power(double x, int y) {
    double result = 1.0;
    long long power = y;
    if (y < 0) {
        power = -power;
        x = 1.0/x;
    }
    // when y is odd, you can take out an x to update answer
    // when y is even, you can rearrange expression for faster expon.
    while (power) {
        if (power & 1) {
            result *= x;
        }
        x *= x, power >>=1;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    // compute x^y
    double x;
    int y;
    cin >> x >> y;
    double ans = Power(x, y);
    cout << ans << endl;

    return 0;
}

