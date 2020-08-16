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

void MatrixLayerInClockwise(const vector<vector<int>>& square_matrix, int offset,
                            vector<int>* spiral_ordering);

vector<int> MatrixInSpiralOrder(const vector<vector<int>>& square_matrix) {
    vector<int> spiral_ordering;
    for (int offset = 0; offset < ceil(0.5 * square_matrix.size()); ++offset) {
        MatrixLayerInClockwise(square_matrix, offset, &spiral_ordering);
    }
    return spiral_ordering;
}

void MatrixLayerInClockwise(const vector<vector<int>>& square_matrix, int offset,
                            vector<int>* spiral_ordering) {
    if (offset == square_matrix.size() - offset - 1) {
        spiral_ordering->emplace_back(square_matrix[offset][offset]);
        return;
    }

    for (int j = offset; j < square_matrix.size() - offset - 1; ++j) {
        spiral_ordering->emplace_back(square_matrix[offset][j]);
    }
    for (int i = offset; i < square_matrix.size() - offset - 1; ++i) {
        spiral_ordering->emplace_back(
                square_matrix[i][square_matrix.size() - offset - 1]);
    }
    for (int j = square_matrix.size() - offset - 1; j > offset; --j) {
        spiral_ordering->emplace_back(
                square_matrix[square_matrix.size() - offset - 1][j]);
    }
    for (int i = square_matrix.size() - offset - 1; i > offset; --i) {
        spiral_ordering->emplace_back(square_matrix[i][offset]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<vector<int>> square_matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = MatrixInSpiralOrder(square_matrix);

    for(int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
// O(n^2) time 
// O(1) space - if we don't include output array
