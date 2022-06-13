#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node *left;
    Node *right;
public:
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

class BinarySearchTree {
   
    private:
          Node *root;
    public:
    BinarySearchTree(){
        this->root = NULL;
    }
    

    Node* add_node(Node *root, int value){
       Node *newNode = new Node(value);

    if(root == NULL){
        root = newNode;
    }
     else{
    if(value < root->data){
            root->left = add_node(root->left,value);
    }
    else{
        root->right = add_node(root->right,value);
    }
     }

return root;
    }

     void inOrderTraversal(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
};

int main(){
    BinarySearchTree bst;

    Node* root = bst.add_node(NULL,10);
    bst.add_node(root,5);
    bst.add_node(root,40);
    bst.add_node(root,30);
    bst.add_node(root,100);
    bst.add_node(root,70);
    bst.add_node(root,80);
    bst.add_node(root,3);
    bst.add_node(root,1);
    bst.add_node(root,2)   ;


    bst.inOrderTraversal(root);

    return 0;
}