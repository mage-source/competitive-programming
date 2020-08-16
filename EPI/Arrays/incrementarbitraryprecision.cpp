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

vector<int> PlusOne(vector<int>* A_ptr) {
    vector<int>& A = *A_ptr;
    ++A.back();
    for(int i = A.size() - 1; i > 0 && A[i] == 10; --i) {
        A[i] = 0, ++A[i-1];
    }
    if(A[0] == 10) {
        A[0] = 0;
        A.insert(A.begin() , 1);
    }
    return A;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<int> A = {9, 9, 9};
    PlusOne(&A);

    for(int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
// O(n) time - where n is length of n
// O(1) space
// Essentially adding 1 to the rightmost value in array and then propogating
// the carry until it is no longer necessary. One important case to handle
// is if we go up a power of 10, in that case we must append 1 to the array.
// Ex. 999 -> 1000
