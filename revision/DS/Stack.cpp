#include<iostream>
using namespace std;
class Node{
    int num;
    Node* next = NULL;
    friend class MyStack;
    public:
    Node(int data)
    {
         num = data;
    }
};

class MyStack{
    Node* head = NULL;
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

       int deleteAtStart()
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
           insertAtStart(data);
      }

      int pop()
      {
        return  deleteAtStart();
      }

};
int main(int argc, char const *argv[])
{
    MyStack mstack;
    mstack.push(20);
    mstack.push(40);
    mstack.push(50);
    mstack.push(55);
    cout << mstack.pop() << " ";
    mstack.push(60);
    cout << mstack.pop() << " ";
    return 0;
}
