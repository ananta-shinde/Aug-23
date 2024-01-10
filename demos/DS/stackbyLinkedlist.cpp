#include<iostream>
using namespace std;


class Node {
    public:
    int data;
    Node * next;
};

class Stack{
    Node* top = NULL;
    public:
    void push(int data)
    {
        Node* new_node = new Node();
        new_node->data = data;
        new_node->next = top;
        top = new_node;
    }

    int pop(){
      if(top == NULL){
         cout << "stack underflows" << endl;
         return 0;
      }
      else{
        Node* current = top;
        int data = top->data;
        current = current->next;
        top = current;
        return data;
      }
      
    }

};

int main(int argc, char const *argv[])
{
    Stack s;
    s.push(20);
    s.push(30);
    cout << s.pop() <<endl;
    cout << s.pop() <<endl;
    cout << s.pop() <<endl;
    return 0;
}
