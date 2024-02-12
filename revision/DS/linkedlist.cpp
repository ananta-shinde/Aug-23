#include<iostream>
using namespace std;

class Node{
    int num;
    Node* next = NULL;
    friend class LinkedList;
    public:
    Node(int data)
    {
         num = data;
    }
};

class LinkedList{
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
        }
      }

      void insertAtPosition(int data,int pos)
      {
            Node* newNode = new Node(data);
            if(pos == 1)
            {
                insertAtStart(data);
            }
            else{
                Node* temp = head;
                int count = 2;
                while(temp->next != NULL)
                {
                    if(count != pos)
                    {
                        temp=temp->next;
                        count++;
                    }
                    else{
                        break;
                    }
                   
                }
                
              newNode->next = temp->next;
              temp->next = newNode;

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

      void deleteAtStart()
      {
           if(head != NULL)
           {
                head = head->next;
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
                temp->next = NULL;
           }
           
      }

     void deleteByValue(int data)
      {
            if(head != NULL)
            {
                Node* temp = head;
                if(temp->num == data)
                {
                     head = head->next;
                }
                else{
                    while (temp->next->num != data)
                    {
                         temp = temp->next;
                    }
                    temp->next =temp->next->next;
                    
                }
            }
      }
};

int main(int argc, char const *argv[])
{
    LinkedList numList;
    numList.insertAtStart(50);
    numList.insertAtStart(60);
    numList.insertAtEnd(70);
    numList.insertAtStart(40);
    numList.insertAtEnd(90);
    numList.insertAtPosition(55,5);
    numList.deleteAtStart();
    numList.printLinkedList();
    numList.deleteByValue(60);
    return 0;
}
