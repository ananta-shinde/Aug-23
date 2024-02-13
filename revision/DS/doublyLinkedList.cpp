#include<iostream>
using namespace std;

class Node{
    int num;
    Node* next = NULL;
    Node* prev = NULL;
    friend class DoblyLinkedList;
    public:
    Node(int data)
    {
         num = data;
    }
};

class DoblyLinkedList{
     Node* head = NULL;
     public:
     void insertAtStart(int data)
      {
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
        }
        else{
            Node* temp = head;
            temp->prev = newNode;
            newNode->next = temp; 
            head = newNode;
        }
      }

       void insertAtEnd(int data)
      {
        Node* newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
      }

      void printLinkedList()
      {
            Node* temp = head;
            while(temp != NULL)
            {
                cout << temp->num << " ";
                temp = temp->next;
            }
      }


      void printReversedLinkedList()
      {
            Node* temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            while(temp != NULL)
            {
                cout << temp->num << " ";
                temp = temp->prev;        
            }
      }

       void deleteAtStart()
      {
           if(head != NULL)
           {
                head = head->next;
                head->prev = NULL;
           }
           
      }

      void deleteAtEnd()
      {
           if(head != NULL)
           {
                Node* temp = head;
                while(temp->next->next != NULL)
                {
                      temp = temp->next;
                }
                temp->next->prev = NULL;
                temp->next = NULL;
           }
           
      }
};
int main(int argc, char const *argv[])
{
    DoblyLinkedList dlist;
    dlist.insertAtStart(20);
    dlist.insertAtStart(30);
    dlist.insertAtStart(40);
    dlist.insertAtEnd(55);
    dlist.deleteAtStart();
    dlist.deleteAtEnd();
    dlist.printLinkedList();
    cout << endl;
    dlist.printReversedLinkedList();
    return 0;
}
