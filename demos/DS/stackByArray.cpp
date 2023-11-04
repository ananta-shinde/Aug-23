#include<iostream>
using namespace std;

class Stack{
        int arr[5];
        int top = -1;

        public:
        void push(int data)
        {
            if(top < 5)
            {
               this->top ++;
               this->arr[top] = data;
            }
            
        }
        int pop()
        {
            if(top>=0)
            {    
                
                 int data = this->arr[top];
                 this->top --;
                 return data;
            }
        }

        int length()
        {
            return this->top + 1;
        }
};
int main(int argc, char const *argv[])
{
    Stack stack;
    stack.push(20);
    stack.push(40);
    stack.push(30);
    cout << stack.length() <<  endl;
    cout << stack.pop()<< endl;
    cout << stack.pop()<< endl;
    cout << stack.pop()<< endl;
    cout << stack.pop()<< endl;
    cout << stack.pop();
     
    return 0;
}
