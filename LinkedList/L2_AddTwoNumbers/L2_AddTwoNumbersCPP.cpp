#include<iostream>
using namespace std;
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry) {
            int sum = carry;

            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};

int main() {
    ListNode* L1 = new ListNode(2);
    L1->next = new ListNode(4);
    L1->next->next = new ListNode(3);

    ListNode* L2 = new ListNode(5);
    L2->next = new ListNode(6);
    L2->next->next = new ListNode(4);

    Solution* sol = new Solution();
    ListNode* L3 = sol->addTwoNumbers(L1, L2);

    while (L3) {
        cout << L3->val << " ";
        L3 = L3->next;
    }
    return 0;
}