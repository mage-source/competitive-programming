#include <bits/stdc++.h>
#include <memory>

typedef long long ll;

using namespace std;

shared_ptr<ListNode<int>> MergeTwoSortedLists(shared_ptr<ListNode<int>> L1,
                                              shared_ptr<ListNode<int>> L2) {
    shared_ptr<ListNode<int>> dummy_head(new ListNode<int>>);
    auto tail = dummy_head;

    while (L1 && L2) {
        // Append the smaller value to result linked list
        AppendNode(L1->data <= L2->data ? &L1 : &L2, &tail);
    }

    // Appends remaining nodes of L1 or L2.
    tail->next = L1 ? L1 : L2;
    return dummy_head->next;
}

void AppendNode(shared_ptr<ListNode<int>> *node,
                shared_ptr<ListNode<int>> *tail) {
    (*tail)->next = *node;
    *tail = *node; 
    *node = (*node)->next; // Keep traversing the two input linked lists.
}
// O(n + m) time
// O(1) space - we reuse the existing nodes.
