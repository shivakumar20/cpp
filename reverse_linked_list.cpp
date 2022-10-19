#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head, int val){
    
    node* n = new node(val);
    
    if(head == NULL){
        head = n;
        return;
    }
    
    node* temp = head;
    
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
};

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp -> next;
    }
    cout<<endl;
};

void deletion(node* &head, int val){
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    
    delete todelete;
}

node* reverse(node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
        
    }
    
    return prevptr;
}




int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    display(head);
    deletion(head, 4);
    cout<<"Values after deletion : ";
    display(head);
    cout<<endl;
    head = reverse(head);
    cout<<"After reverse linked list : ";
    display(head);
    cout<<endl;
    
    
    
    return 0;
};