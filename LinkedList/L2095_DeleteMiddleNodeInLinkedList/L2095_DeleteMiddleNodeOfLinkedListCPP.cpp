#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head->next == nullptr){
            head = nullptr;
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = head;

        while(fast != nullptr && fast->next != nullptr){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp->next = slow->next;
        delete slow;

        return head;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(3);
    ListNode* third = new ListNode(4);
    ListNode* fourth = new ListNode(7);

    head->next = second;
    second->next = third;
    third->next = fourth;

    Solution obj;
    ListNode* ans = obj.deleteMiddle(head);

    while(ans != nullptr){
        cout << ans->val << " ";
        ans = ans->next;
    }
    cout << endl;
    return 0;
}