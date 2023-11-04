#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;
    Node* prev = NULL;
};

// insert at start
void push(Node** head,int data)
{
     Node* new_node = new Node();
     Node* current = *head;
     new_node->data = data;
      if(current  == NULL)
     {
        *head = new_node;
     }
     else{
        current->prev = new_node;
        new_node->next = current;
        *head = new_node;
     }
     
     
     
}

// insert at end
void insert(Node** head,int data)
{
     Node* new_node = new Node();
     new_node->data = data;
     Node* current = *head;
     if(current  == NULL)
     {
        *head = new_node;
     }
     else{
        while(current->next != NULL)
     {
        current = current->next;
     }
     new_node->prev = current;
    current->next = new_node;
     }
       
}

void printLinkedListInReverse(Node * head)
{
    Node* current = head;
    while (current ->next!= NULL)
    {
        current = current->next;
    }
    while(current != NULL){
          cout << current->data;
          current = current->prev;
    }
    
}

void printLinkedList(Node * head)
{
    Node* current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    
}

// delete at start
void pop( Node** head){
      Node* current = *head;
      current = current->next;
      current->prev = NULL;
      *head = current;
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    push(&head,20);
    push(&head,25);
    push(&head,40);
    insert(&head,45);
    printLinkedList(head);
    cout <<endl;
    pop(&head);
    printLinkedListInReverse(head);
    return 0;
}

