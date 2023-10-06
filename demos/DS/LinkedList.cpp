#include<stdio.h>

struct Node{
    int data;
    Node *next = NULL;
};
struct Student{
    int data;
    Student *next = NULL;
};

struct LinkedList
{
     Node *start = NULL;
};


int main(int argc, char const *argv[])
{
   
    Node l1,l2,l3;
    Node *start = &l1;
    l1.data = 20;
    l1.next = &l2;
    l2.data = 40;
    l2.next = &l3;
    l3.data = 100;

     
    Node * temp = start;
    while(temp != NULL)
    {
         printf("%d\n",temp->data);
        temp = temp->next;
        
    }
    
    return 0;
}
