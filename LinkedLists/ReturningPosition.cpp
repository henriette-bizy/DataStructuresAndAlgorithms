#include <iostream>
using namespace std;


class Node{
public:
    int data;
    Node *next;
public:
    Node(){
    this->next = NULL ;
    }
    Node(int data){
    this->data = data;
    this->next = NULL;
    }
};


class Linkedlist{
public:
    Node *head ;
public:
    Linkedlist(){
    this->head = NULL;
    }



int FindNodeByPos(int key){
    int position = 1;
    Node *current = head;
    while(current != NULL){
   if(current->data == key){
  return position;
   }
   current = current->next;
   position++;
    }
    return -1;
};
void addNewNode(int data){
    Node *newNode = new Node(data);

    cout << "atleast this is the top of the head == null ";
    if (head == NULL){
        head = newNode;
        return;
        cout << "we are reaching here";
    }

    Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;

    }


    temp->next = newNode;


}
};

int main(){

cout << "this is something ";
 Linkedlist Mylist;

    Mylist.addNewNode(2);
    Mylist.addNewNode(4);
    Mylist.addNewNode(5);
    Mylist.addNewNode(7);
    cout << Mylist.FindNodeByPos(5);
    
    return 0;
}
