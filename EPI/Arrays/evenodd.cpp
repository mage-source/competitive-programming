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

void EvenOdd(vector<int>* A_ptr) {
    vector<int>& A = *A_ptr;
    int next_even = 0, next_odd = A.size() - 1;
    while(next_even < next_odd) {
        if(A[next_even] % 2 == 0) {
            ++next_even;
        } else {
            swap(A[next_even], A[next_odd--]); // swap happens before decrement
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    //freopen(\"input.tx\",\"r\",stdin);
    //freopen(\"ouput.txt\",\"w\",stdout);

    vector<int> A = {1,2,3,4,5,6,7,8,9};
    
    EvenOdd(&A);

    for(int i=0;i<A.size();++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

// Essentially you are moving front point until you get a value that is odd
// then swapping with the end pointer, this has the effect of pushing the odd
// numbers to the end of array and getting the even to the front
// O(n) time 
// O(1) space
