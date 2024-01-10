#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
};

class Queue{
    Node* front = NULL;
    Node* rear = NULL;
    public:
    void insert(int data)
    {
        if(rear == NULL)
        {
            Node* new_node = new Node();
            new_node->data = data;
            new_node->next = front;
            front = new_node;
            rear = new_node;
        }else {
            Node* new_node = new Node();
            new_node->data = data;
            rear->next = new_node;
        }
    }

     int deletefront()
    {
        if(rear == NULL)
        {
             cout << "Queue undeflows " << endl;
        }else {
           int data = front->data;
           front = front->next;
           return data;
        }
    }
};


int main(int argc, char const *argv[])
{
    Queue q;
    q.insert(20);
    q.insert(30);
    q.insert(40);
    cout <<  q.deletefront() << endl;
    return 0;
}

