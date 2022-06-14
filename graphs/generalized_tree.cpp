#include<bits/stdtr1c++.h>
#include <iostream>
using namespace std;



struct Node{
    int key;
    Node *parent;
    vector<Node*> children;

};




Node * addNode(Node *parent, int key){
    Node *newNode = new Node();
    newNode->parent = parent;
    newNode->key= key;

//once the parent is not null, we are allowed to add children
    if(parent != NULL){
        parent->children.push_back(newNode);
    }

     parent = newNode;

};

//codes for displaying in a bfs way
//this is printed in a ordered level to mean that all children are being printed on the same line

void bfs_display(Node * root){

 queue<Node *> q;
 q.push(root);
  while(!q.empty()){

     int size = q.size();
    //  cout << "this is the size of children"<<endl;
     while(size >0){
      Node * currentNode = q.front();
      cout << currentNode->key<<"  ";
      q.pop();
     
      for(auto childrenNode:currentNode->children){
      
          q.push(childrenNode);
      }
      size--;
  }
  cout<<endl;
}
}


int main(){
    Node *root = addNode(NULL,1);
    Node *firstChild = addNode(root,2); 
    Node *secondChild = addNode(root,3);
    Node *thirdChild = addNode(root,4);


    Node *grandChild = addNode(secondChild,10);
    Node *grandChildTwo = addNode(secondChild,15);
    Node *grandChildThree = addNode(secondChild,7);

  bfs_display(root);

}
