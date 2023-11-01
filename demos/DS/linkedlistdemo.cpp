#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head,int data)
{
   Node * new_node = new Node();
   new_node->data = data; 
   new_node->next = *head;
   *head = new_node;
}

void insertAtEnd(Node** head,int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    Node* current = *head;
    if(current == NULL)
    {
        *head = new_node;
    }
    else{
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
    }

}


void printList ( Node* head)
{
    Node* current = head;
    while(current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    insertAtEnd(&head,20);
    insertAtEnd(&head,30);
    insertAtEnd(&head,40);
    printList(head);

    return 0;
}
