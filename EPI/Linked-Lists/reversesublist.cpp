#include <bits/stdc++.h>
#include <memory>

typedef long long ll;

using namespace std;

shared_ptr<ListNode<int>> ReverseSublist(shared_ptr<ListNode<int>> L,
                                         int start, int finish) {
    if (start == finish) {
        return L; // No need to reverse;
    }
    auto dummy_head = make_shared(<ListNode<int>>{0, L});
    auto sublist_head = dummy_head;
    int k = 1;
    while (k++ < start) {
        sublist_head = sublist_head->next;
    }

    auto sublist_iter = sublist_head->next;
    while (start++ < finish) {
        auto temp = sublist_iter->next;
        sublist_iter->next = temp->next;
        temp->next = sublist_head->next;
        sublist_head->next = temp;
    }
    return dummy_head->next;
}
// O(f) time - since time complexity is dominated by the search for 
// fth node.
// O(1) space - reusing nodes.
    
