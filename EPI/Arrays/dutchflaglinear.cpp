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

void DutchFlagPartition(int pivot_index, vector<int>* A_ptr) {
    vector<int>& A = *A_ptr;
    int pivot = A[pivot_index];

    int smaller = 0;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] < pivot) {
            swap(A[i], A[smaller++]);
        }
    }

    int larger = A.size() - 1;
    for (int i = A.size() - 1; i >= 0 && A[i] >= pivot; --i) {
        if(A[i] > pivot) {
            swap(A[i], A[larger--]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<int> A = {0, 1, 2, 0, 2, 1, 1};
    int pivot_index;
    cin >> pivot_index;
    DutchFlagPartition(pivot_index, &A);
    for(int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
// O(n) time - optimization over naive implementation; we make the swaps as we
// iterate over the array instead of starting from beginning every time.
// O(1) space
