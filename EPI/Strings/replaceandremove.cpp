#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int ReplaceAndRemove(int size, vector<char> s) {
    // forward iteration: count 'a's and replace 'b's.
    int write_idx = 0, a_count = 0;
    for (int i = 0; i < size; ++i) {
       if (s[i] != 'b') {
           s[write_idx++] = s[i];
       }
       if (s[i] == 'a') {
           ++a_count;
       }
    }

    // backward iteration: replace 'a's with "dd"s starting from end.
    int cur_idx = write_idx - 1; // points to last element of input array.
    write_idx = write_idx + a_count - 1; // points to last of resized array.
    const int final_size = write_idx + 1;

    while (cur_idx >= 0) {
        if (s[cur_idx == 'a']) {
            s[write_idx--] = 'd';
            s[write_idx--] = 'd';
        } else {
            s[write_idx--] = s[cur_idx];
        }
        --cur_idx;
    }
    return final_size;
}
// O(n) time - only forward and backward iteration.
// O(1) space - everything done in-place.
