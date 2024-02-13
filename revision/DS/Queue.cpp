#include<iostream>
using namespace std;

class Node{
    int num;
    Node* next = NULL;
    friend class MyQueue;
    public:
    Node(int data)
    {
         num = data;
    }
};

class MyQueue{

    Node* head = NULL;
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

       int  deleteAtStart()
      {
           int data;
           if(head != NULL)
           {
                data = head->num;
                head = head->next;
           }

           return data;
           
      }

      public:
    void push(int data)
    {
         insertAtEnd(data);
    }

    int  pop()
    {
        return deleteAtStart();
    }

    
};

int main(int argc, char const *argv[])
{
    MyQueue myQueue;
    myQueue.push(50);
    myQueue.push(30);
    myQueue.push(40);
    cout << myQueue.pop() << " ";
    cout << myQueue.pop() << " ";
    cout << myQueue.pop() << " ";
    return 0;
}
