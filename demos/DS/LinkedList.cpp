#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next = NULL;
};

int lengthLikedList(Node* head);

// insert at start
void push(Node** head,int data)
{
     Node* new_node = new Node();
     new_node->data = data;
     new_node->next = *head;
     *head = new_node;
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
    current->next = new_node;
     }
       
}

// print a linked list
void printLinkedList(Node * head)
{
    Node* current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    
}

// insert by position
void insertByPosition(Node** head,int data,int position)
{
    if(position > lengthLikedList(*head)){
        cout << "Postion is Invalid";
    }
    else{

    
     Node* new_node = new Node();
     new_node->data = data;
     Node* current = *head;
     if(current  == NULL)
     {
        *head = new_node;
     }
     else{
        if(position == 0)
        {
            push(head,data);
        }
        else{
            for(int i= 1;i<position-1;i++)
            {
                current = current->next;
            }
            new_node->next = current->next;
            current->next = new_node;
        }
        // while(current->next != NULL)
        // {
        //     current = current->next;
        // }
        // current->next = new_node;
     }
    }
       
}
 
// length of linked list
int lengthLikedList(Node* head){
    Node* current = head;
    int count = 0;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

// delete at start
void pop( Node** head){
      Node* current = *head;
      current = current->next;
      *head = current;
}

int main(int argc, char const *argv[])
{
    Node* head = NULL;
    // push(&head,20);
    // push(&head,30);
    // push(&head,40);
    

    insert(&head,20);
    insert(&head,50);
    insert(&head,50);
    
    insertByPosition(&head,44,0);
    insertByPosition(&head,22,1);
    insertByPosition(&head,23,2);

    printLinkedList(head);
    cout << endl;
    pop(&head);

    printLinkedList(head);
   
    return 0;
}
