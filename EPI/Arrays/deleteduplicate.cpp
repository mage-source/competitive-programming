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

// Returns the number of valid entries after deletion.
int DeleteDuplicates(vector<int>* A_ptr) {
    vector<int>& A = *A_ptr;
    if (A.empty()) {
        return 0;
    }

    int write_index = 1;
    // the write_index acts as a pivot element separating out non-duplicate
    // subarray from the rest of the elements. it stays there until i finds
    // a new distinct element to insert there, then write_index moves along.
    for (int i = 1; i < A.size(); ++i) {
        if (A[write_index - 1] != A[i]) {
            A[write_index++] = A[i]; // assignment happens before increment.
        }
    }
    return write_index;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<int> A = {2, 3, 5, 6, 7, 11, 11, 11, 13, 14, 17};
    int ans = DeleteDuplicates(&A);
    
    cout << ans << endl;
    // the final write_index acts as pivot element for out non-duplicate subarray.
    for (int i = 0; i < ans; ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
// O(n) time - single pass through array.
// O(1) space
