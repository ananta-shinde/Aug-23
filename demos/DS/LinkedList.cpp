 #include<stdio.h>
 struct Node{
    int data;
    Node * next = NULL;
 };

  struct Node *insert (Node* current_head, int data) {
    Node n1;
   n1.data = data;
   n1.next = current_head;  
    return &n1;
}
 int main(int argc, char const *argv[])
 {
   // 1. create empty linked list
    Node * head = NULL;
   
   // 2. create new node
   Node n1;
   n1.data = 40;

   // 3.link node to list : list is empty
   head = &n1;

   //4.create second node
   Node n2;
   // n2.data = 50;
   insert(head,60);

   //5.link node to list: list is not empty
     //a.connect new node first
     head->next = &n2;
     //b. copy head into temp, use temp for insert
     Node *temp = head;
     temp = temp->next;

     printf("%d",head->data);
     printf("%d",temp->data);

    return 0;
 }
 