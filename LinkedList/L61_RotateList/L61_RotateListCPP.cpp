#include<iostream>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;
    
    ListNode(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if(head == nullptr || head->next == nullptr || k == 0)
            return head;

        // Find length and last node
        ListNode* tail = head;
        int len = 1;

        while(tail->next){
            tail = tail->next;
            len++;
        }

        k %= len;

        if(k == 0)
            return head;

        // Make circular list
        tail->next = head;

        // Move to new tail
        int steps = len - k;
        ListNode* newTail = head;

        for(int i = 1; i < steps; i++)
            newTail = newTail->next;

        // New head
        ListNode* newHead = newTail->next;

        // Break the circle
        newTail->next = nullptr;

        return newHead;
    }
};

int main(){
    Solution obj;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);      
    
    ListNode* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    
    head = obj.rotateRight(head, 2);

    while(head){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;

    return 0;    
}