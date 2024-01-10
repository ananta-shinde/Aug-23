#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
};

class CircularList{
    Node* head = NULL;
    public:

    void insert(int data)
    {
        Node* new_node = new Node();
        new_node->data = data;
        Node* current = head;
        if(current  == NULL)
        {
            new_node->next = head;
            head = new_node;
            
        }
        else{
            while(current != head)
        {
            current = current->next;
        }
            new_node->next = head;
            current->next = new_node;    
        }
        
    }

    void printLinkedList()
    {
        Node* current = head;
        while (current != head)
        {
            cout << current->data << " ";
            current = current->next;
        }
        
    }
    
};

int main(int argc, char const *argv[])
{
    CircularList list;
    list.insert(20);
    list.insert(20);
    list.printLinkedList();
    return 0;
}
