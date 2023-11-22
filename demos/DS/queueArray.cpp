#include<iostream>
using namespace std;

class Queue{
    int arr[5];
    int front =-1;
    int rear = -1;

    public:

    void insert(int data)
    {  
        if(rear < 5)
        {
            if(rear == -1)
            {
                front++;
            }
            this->rear++;
            this->arr[rear] = data;
        }
       
    }

    int deleteData()
    {
           if(front <= rear)
           {
            int data = this->arr[front];
            this->front++;
            return data;
           }
           else{
              cout << "Queue underflows " << endl;
              return 0 ;
           }
         
    }

    int getLength()
    { 
            return (this->rear - this->front)+1; 
    }

    int getFront()
    {
        return this->arr[front];
    }
    int getRear()
    {
        return this->arr[rear];
    }
};


int main(int argc, char const *argv[])
{
    
    Queue q;
    q.insert(5);
    q.insert(20);
    q.insert(30);
     cout  << "front :" << q.getFront() << endl;
     cout  << "Rear :" << q.getRear() << endl;
     cout  << "length :" << q.getLength() << endl;
    cout <<"element deleted :"<< q.deleteData() << endl; 
    cout <<"element deleted :"<< q.deleteData() << endl;
    cout <<"element deleted :"<< q.deleteData() << endl;
    return 0;
}
