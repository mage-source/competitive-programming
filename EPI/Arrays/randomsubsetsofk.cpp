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
#include <random>

typedef long long ll;

using namespace std;

void RandomSampling(int k, vector<int>* A_ptr) {
    vector<int>& A = *A_ptr;
    default_random_engine seed((random_device())());
    for(int i = 0; i < k; ++i) {
        swap(A[i], A[uniform_int_distribution<int> {
                i, static_cast<int>(A.size()) - 1}(seed)]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<int> A = {3, 7, 5, 11};
    int k;
    cin >> k;
    RandomSampling(k, &A);
    for(int i = 0; i < k; ++i) {
        cout << A[i] << " ";
    }

    return 0;
}
// O(k) where k is the size of the subset we want to generate
// O(1) space
// rand() % n may or may not generate numbers uniformly depending on the range
// and value of RAND_MAX, so it is discouraged to use.
