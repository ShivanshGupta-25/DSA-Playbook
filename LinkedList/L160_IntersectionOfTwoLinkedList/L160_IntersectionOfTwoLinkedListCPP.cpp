#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;

        while (a != b) {
            a = (a == nullptr) ? headB : a->next;
            b = (b == nullptr) ? headA : b->next;
        }

        return a;
    }
};

int main() {

    // Common part
    ListNode *common = new ListNode(8);
    common->next = new ListNode(10);

    // List A: 1 -> 2 -> 8 -> 10
    ListNode *headA = new ListNode(1);
    headA->next = new ListNode(2);
    headA->next->next = common;

    // List B: 3 -> 4 -> 5 -> 8 -> 10
    ListNode *headB = new ListNode(3);
    headB->next = new ListNode(4);
    headB->next->next = new ListNode(5);
    headB->next->next->next = common;

    Solution obj;
    ListNode *result = obj.getIntersectionNode(headA, headB);

    if (result)
        cout << "Intersection at node: " << result->val << endl;
    else
        cout << "No Intersection\n";

    return 0;
}