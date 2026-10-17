#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *deleteDuplicates_2(ListNode *head) {
    // FIXED: dummy is now a stack object, not a null pointer.
    // FIXED: use .next and &dummy instead of ->next.
    ListNode dummy(0);
    dummy.next = head;

    // FIXED: prev starts at &dummy, not head, so the head itself can be
    // deleted.
    ListNode *prev = &dummy;
    ListNode *crt = head;

    while (crt != nullptr) {
        // FIXED: condition was backwards (== nullptr) and dereferenced null.
        // Now checks next != nullptr before comparing values.
        if (crt->next != nullptr && crt->val == crt->next->val) {
            // FIXED: same nullptr bug in inner loop; also removed cout spam.
            while (crt->next != nullptr && crt->val == crt->next->val) {
                crt = crt->next;
            }
            // prev->next now skips the ENTIRE run, not one node.
            prev->next = crt->next;
        } else {
            prev = crt;
        }
        crt = crt->next;
    }

    // FIXED: return dummy.next (dummy is an object, not a pointer).
    return dummy.next;
}

void printList(ListNode *head) {
    while (head != nullptr) {
        std::cout << head->val;
        head = head->next;
    }
}

int main() {
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(3);
    ListNode *fifth = new ListNode(4);
    ListNode *sixth = new ListNode(4);
    ListNode *seven = new ListNode(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // FIXED: your list wasn't fully linked (sixth/seven were created but
    // never attached), and "cout << head->next" was removed (printed a
    // pointer).
    fifth->next = sixth;
    sixth->next = seven;

    ListNode *result = deleteDuplicates_2(head);
    printList(result);
}
