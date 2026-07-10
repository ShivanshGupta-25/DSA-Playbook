#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Solution{
    public:
        int lengthOfLinkedList(Node *head){
            int count = 0;
            Node *temp = head;
            while(temp != NULL){
                count++;
                temp = temp->next;
            }
            return count;
        }
};

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    Solution obj;
    cout << "Length of Linked List: " << obj.lengthOfLinkedList(head);    
    return 0;
}