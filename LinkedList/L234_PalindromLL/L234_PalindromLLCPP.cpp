#include<iostream>
#include<vector>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode *next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

bool isPalindrome(ListNode *head) {
    vector<int> list_vals;
    while(head) {
        list_vals.push_back(head->val);
        head = head->next;
    }
    
    int left = 0, right = list_vals.size() - 1;
    while(left < right && list_vals[left] == list_vals[right]) {
        left++;
        right--;
    }
    return left >= right;
}

int main() {
    ListNode *a = new ListNode(4);
    ListNode *b = new ListNode(5);
    ListNode *c = new ListNode(1);
    ListNode *d = new ListNode(9);
    ListNode *e = new ListNode(1);
    ListNode *f = new ListNode(9);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    cout << isPalindrome(a);
    return 0;
}