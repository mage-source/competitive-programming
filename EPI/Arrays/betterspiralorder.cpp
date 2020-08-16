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

vector<int> MatrixInSpiralOrder(vector<vector<int>> square_matrix) {
    const vector<vector<int>>kShift = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    int dir = 0, x = 0, y = 0;
    vector<int> spiral_ordering;

    for (int i = 0; i < square_matrix.size() * square_matrix.size(); ++i) {
        spiral_ordering.emplace_back(square_matrix[x][y]);
        square_matrix[x][y] = 0;
        int next_x = x + kShift[dir][0], next_y = y + kShift[dir][1];
        if (next_x < 0 || next_x >= square_matrix.size() || next_y < 0 ||
            next_y >= square_matrix.size() ||
            square_matrix[next_x][next_y] == 0) {
            // when you hit one of these conditions, that's when you change
            // to a new kShift, mod is used since it cycles for each layer
            // of matrix
            dir = (dir + 1) % 4;
            next_x = x + kShift[dir][0], next_y = y + kShift[dir][1];
        }
        x = next_x, y = next_y;
    }
    return spiral_ordering;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<vector<int>> square_matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> ans = MatrixInSpiralOrder(square_matrix);
    for(int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }

    return 0;
}
// O(n^2) time 
// O(1) space
// Time-space complexity is not any better than the other method,
// but the traversal is done in a single loop where in the other
// method it was done in 4 separate loops.
