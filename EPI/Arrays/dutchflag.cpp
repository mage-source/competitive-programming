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
   for(int i = 0; i < A.size(); ++i) {
       for(int j = i + 1; j < A.size(); ++j) {
           if(A[j] < pivot) {
               swap(A[i], A[j]);
               break;
           }
       }
   }
   for(int i = A.size() - 1; i >= 0 && A[i] >= pivot; --i) {
       for(int j = i - 1; j >= 0 && A[j] >= pivot; --j) {
           if(A[j] > pivot) {
               swap(A[i], A[j]);
               break;
           }
       }
   }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<int> A = {0, 1, 2, 0, 2, 1, 1};
    int pivot_index = 1;
    DutchFlagPartition(pivot_index, &A);
    for(int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
// O(n^2) time - this approach has a bad time complexity because in the first 
// pass when searching for each additional element smaller than the pivot
// we start from the beginning. However, there is no reason to start from so
// far back - we can begin from the last location we advanced to.
// O(1) space
