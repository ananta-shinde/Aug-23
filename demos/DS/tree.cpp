#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left = NULL;
    Node* right = NULL;
};

class BTree{
    Node* root = NULL;

    public : 
    void InsertNode(int data)
        {
            Node *  new_node = new Node();
            new_node->data = data;
            // If the tree is empty, assign new node address to root
            if (this->root == NULL) {
                
                root =  new_node; 
            }
        
            // Else, do level order traversal until we find an empty
            // place, i.e. either left child or right child of some
            // node is pointing to NULL.
            queue<Node*> q;
            q.push(root);
        
            while (!q.empty()) {
                Node* temp = q.front();
                q.pop();
        
                if (temp->left != NULL)
                    q.push(temp->left);
                else {
                    temp->left =  new_node;
                }
        
                if (temp->right != NULL)
                    q.push(temp->right);
                else {
                    temp->right = new_node;
                
                }
            }
        }

        void inorder()
{
    Node* temp = this->root;
    if (temp == NULL)
        return;
 
    while(temp->left)
    {
        cout << temp->data << ' ';
    }

    while(temp->right)
    {
         cout << temp->data << ' ';
    }
}

};



int main(int argc, char const *argv[])
{
     BTree bt;
     bt.InsertNode(20);
     bt.InsertNode(30);
     bt.InsertNode(40);


    return 0;
}
