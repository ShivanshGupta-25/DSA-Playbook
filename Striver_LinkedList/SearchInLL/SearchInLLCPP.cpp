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
        bool searchInLinkedList(Node *head, int val){
            Node *temp = head;
            while(temp != NULL){
                if(temp->data == val){
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }
};

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    Solution obj;
    cout << "Searched Element in Linked List: " << obj.searchInLinkedList(head,20);    
    return 0;
}