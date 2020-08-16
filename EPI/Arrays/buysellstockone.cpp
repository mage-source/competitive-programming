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

double BuyAndSellStockOnce(const vector<double>& prices) {
    double min_price_so_far = numeric_limits<double>::max(), max_profit = 0;
    for (const double& price : prices) {
        double max_profit_sell_today = price - min_price_so_far;
        max_profit = max(max_profit, max_profit_sell_today);
        min_price_so_far = min(min_price_so_far, price);
    }
    return max_profit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<double> stock_prices = {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
    
    double ans = BuyAndSellStockOnce(stock_prices);
    
    cout << ans << endl;

    return 0;
}
// O(n) time 
// O(1) space
