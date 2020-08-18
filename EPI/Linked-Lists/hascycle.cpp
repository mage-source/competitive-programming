#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

shared_ptr<ListNode<int>> HasCycle(const shared_ptr<ListNode<int>>& head) {
    shared_ptr<ListNode<int>> fast = head, slow = head;

    while (fast && fast->next) {
        slow = slow->next, fast = fast->next->next;
        if (slow == fast) {
            // There is a cycle, now we have to calculate its length.
            int cycle_len = 0;
            do {
                ++cycle_len;
                fast = fast->next;
            } while (slow != fast);

            // Finds the start of the cycle.
            auto cycle_len_advanced_iter = head;
            while (cycle_len--) {
                cycle_len_advanced_iter = cycle_len_advanced_iter->next;
            }

            auto iter = head;
            // Both iterators advance in tandem.
            while (iter != cycle_len_advanced_iter) {
                iter = iter->next;
                cycle_len_advanced_iter = cycle_len_advanced_iter->next;
            }
            return iter; // iter is the start of the cycle.
        }
    }
    return nullptr; // No cycle.
}
// Let F be the number of nodes to the start of the cycle, C the number of
// nodes on the cycle, and n the total number of nodes. Then the time 
// complexity is O(F) + O(C) => O(n).
// O(F) for both pointers to reach the cycle, and O(C) for them to overlap
// once the slower one enters the cycle.
