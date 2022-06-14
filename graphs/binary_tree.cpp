#include<iostream>
#include <bits/stdc++.h>
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


class BinaryTree{
   public:
          Node *root;

    public:
          BinaryTree(){
              this->root = NULL;
          }
        
    Node *addNode(Node *current ,int data, bool isLeft){
        Node *newNode = new Node(data);
        if(current == NULL){
            root = newNode;
        }
        else{
            if(isLeft){
                current->left = newNode;
            }
            else{
                current->right = newNode;
            }

        }
        return newNode;
    }


// result of InorderTraversal [2,3,16,5,4,6,1,9,13,10,15,11,9]
     void inOrderTraversal(Node *root){
     if(root == NULL){return; }
     inOrderTraversal(root->left);
     cout <<root->data << ",";
     inOrderTraversal(root->right);
    }

//result of PreOrderTraversal [1,5,3,2,16,6,4,10,9,13,11,15,9]
    void preOrderTraversal(Node *root){
        if(root == NULL){
            return;
        }
        cout<<root->data<<",";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
//result of PostOrderTravesal [2,16,3,4,6,5,13,9,15,9,11,10,1]
    void postOrderTraversal(Node * root){
        if(root == NULL){return;}

        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<<root->data<<",";
    }
    };


int main(){
   
    BinaryTree bt;
    Node *root = bt.addNode(NULL, 1, false);
	Node *left = bt.addNode(root, 5, true);
	Node *right = bt.addNode(root, 10, false);
	Node *leftLeft = bt.addNode(left, 3, true);
	Node *leftRight = bt.addNode(left, 6, false);
	Node *rightLeft = bt.addNode(right, 9, true);
	Node *rightRight = bt.addNode(right, 11, false);
	Node *leftLeftLeft = bt.addNode(leftLeft, 2, true);
	Node *leftLeftRight = bt.addNode(leftLeft, 16, false);
	Node *leftRightLeft = bt.addNode(leftRight, 4, true);
	Node *rightLeftRight = bt.addNode(rightLeft, 13, false);
	Node *rightRightLeft = bt.addNode(rightRight, 15, true);
	Node *rightRightRight = bt.addNode(rightRight, 9, false);
  

    cout <<"In order Traversal:";
    bt.inOrderTraversal(root);
    cout<<endl;
    cout <<"Pre-order traversal";
    bt.preOrderTraversal(root);
    cout<<endl;
    cout <<"Post-order traversal:";
    bt.postOrderTraversal(root);
    return 0;     
}

   