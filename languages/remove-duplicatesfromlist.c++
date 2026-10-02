#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 1,1,3,3,5
// set pointer of current to next so it skips the duplicate
// 1->1 find dup
// now 1->3
// 1 gets skipped but which one
// first or second
// second onehas th enext unique value pointer so it should be it i think?
// lets try

ListNode *deleteDuplicates(ListNode *head) {

    ListNode *current = head;
    while (current != nullptr) {
        if (current->next == nullptr) {
            if (current->val == current->next->val) {
                current->next = nullptr;
            }
            break;
        } else {
            if (current->val == current->next->val) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }
    }
    return head;
}
void printList(ListNode *head) {
    while (head != nullptr) {
        std::cout << head->val;
        head = head->next;
    }
}

int main() {
    ListNode *head = new ListNode(1);
    ListNode *second = new ListNode(1);
    ListNode *third = new ListNode(3);
    ListNode *fourth = new ListNode(5);
    ListNode *fifth = new ListNode(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    deleteDuplicates(head);
    printList(head);
}
