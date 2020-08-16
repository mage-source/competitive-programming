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

bool HasDuplicate(const vector<vector<int>>& partial_assignment, 
                  int start_row, int end_row, int start_col, int end_col);

bool IsValidSudoku(const vector<vector<int>>& partial_assignment) {
    // Check row constraints
    for (int i = 0; i < partial_assignment.size(); ++i) {
        if (HasDuplicate(partial_assignment, i, i + 1, 0,
                        partial_assignment.size())) {
            return false;
        }
    }

    // Check column constraints
    for (int j = 0; j < partial_assignment.size(); ++j) {
        if (HasDuplicate(partial_assignment, 0, partial_assignment.size(), j,
                        j + 1)) {
            return false;
        }
    }

    // Check region constraints
    int region_size = sqrt(partial_assignment.size());
    for(int I = 0; I < region_size; ++I) {
        for(int J = 0; J < region_size; ++J) {
            if (HasDuplicate(partial_assignment, region_size * I, 
                             region_size * (I + 1), region_size * J,
                             region_size * (J + 1))) {
                return false;
            }
        }
    }
    return true;
}

bool HasDuplicate(const vector<vector<int>>& partial_assignment, 
                  int start_row, int end_row, int start_col, int end_col) {
    deque<bool> is_present(partial_assignment.size() + 1, false);
    for (int i = start_row; i < end_row; ++i) {
        for (int j = start_col; j < end_col; ++j) {
            if (partial_assignment[i][j] != 0 &&
                is_present[partial_assignment[i][j]]) {
                return true;
            }
            is_present[partial_assignment[i][j]] = true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<vector<int>> board = {{5, 3, 0, 0, 7, 0, 0, 0, 0},
                                 {6, 0, 0, 1, 9, 5, 0, 0, 0},
                                 {0, 9, 8, 0, 0, 0, 0, 6, 0},
                                 {8, 0, 0, 0, 6, 0, 0, 0, 3},
                                 {4, 0, 0, 8, 0, 3, 0, 0, 1},
                                 {7, 0, 0, 0, 2, 0, 0, 0, 6},
                                 {0, 6, 0, 0, 0, 0, 2, 8, 0},
                                 {0, 0, 0, 4, 1, 9, 0, 0, 5},
                                 {0, 0, 0, 0, 8, 0, 0, 7, 9}};
    
    bool ans = IsValidSudoku(board);

    if(ans) cout << "YES\n";
    else cout << "NO\n";
                                

    return 0;
}
// O(n^2) time - intuitively, we are traversing a matrix 3 separate times
// O(n) time - need the bit array to keep track of previously encountered values
