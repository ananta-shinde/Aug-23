  #include<stdio.h>
  #include<stdlib.h>
 struct node{
    int data;
    node * next = NULL;
 };

struct node* insert(node *head,int data) {
   struct node* newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = data;
   newnode->next = NULL;
   head = newnode;
   return newnode;
}
 int main(int argc, char const *argv[])
 {
   node* head = NULL;
   
  insert(head,20);
  insert(head,30);
    
   printf("%d",head->data);
   
    return 0;
 }
 