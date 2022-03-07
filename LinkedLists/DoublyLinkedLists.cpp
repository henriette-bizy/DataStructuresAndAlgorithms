#include<iostream>
using namespace std;

struct  Node
{
    public:
       Node *previous;
       int data;
       Node * next;

    public:
     Node(int data){
         this->data = data;
         this->previous = NULL;
         this->next = NULL;
     }
};


struct Doubly{
    public:
    Node * head;
    public:
    Doubly(){
     this->head = NULL;
    }
    public:
    //adding at head
    void addAtBeginning(int data){
    Node *NewNode = new Node(data);
    //Once our head is null
    if(head == NULL){
      head = NewNode;
      return;
    }
    
    NewNode->next = head;
    NewNode->previous = NULL;
    head->previous = NewNode;
    head = NewNode;
     
    }

    //displaying our doublyLists
    void Display(){
   
     //checking the empty doubly list
     if(head == NULL){
         cout << "Empty doubly list";
     }
  
    Node * current = head;
    while(current != NULL){
        cout << current->data<< " "<<endl;
        current = current->next;
    }
    }

    //adding at the end
    Node * addToEnd(int data){
    Node * NewNode = new Node(data);

    //checking if our head is not nu;;
    if(head == NULL){
        head = NewNode;
    }
    // looping up to the last node

    Node *current = head;

    while(current->next != NULL){
        current  = current->next;
    }
    current->next = NewNode;
    NewNode->previous = current;

    return NewNode;
    }


    //insertin in between

    void insertAfter(Node * PositionNode, int data){
    
    //checking if the previous node is not empty
    Node * newNode = new Node(data);
    if(PositionNode->next == NULL){
      PositionNode->next = newNode;
      newNode->previous = PositionNode;
      return;
      }

     Node *afterNode = PositionNode->next;
     newNode = PositionNode->next;
     newNode->previous = PositionNode;
     newNode->next = afterNode;
     afterNode->previous = newNode;


}
void DisplayFromEnd(){



    
}






};

int main(){

 Doubly dlist;
 dlist.addAtBeginning(5);
 dlist.addAtBeginning(6);
 dlist.addAtBeginning(7);
 dlist.addAtBeginning(8);
 dlist.addToEnd(12);
 dlist.Display();

    return 0;
}

